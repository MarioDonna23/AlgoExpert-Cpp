/*
https://www.algoexpert.io/questions/three-number-sum
*/

#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> threeNumberSum(vector<int> array, int targetSum) {
  int left = 0;
  int middle = 1;
  int right = array.size() - 1;
  int sum = 0;
  vector<vector<int>> result; // Vector of vectors to store the result
  sort(array.begin(), array.end()); // Sort the array
  
  for(left=0; left<array.size()-1; left++){ // Left is set as the pivot
    middle = left + 1;
    while(middle < right){ // Evaluate different values for middle and right
      sum = array[left] + array[middle] + array[right]; // Calculate sum of 3 numbers
      if(sum == targetSum){ // Check if we have a good combination
        result.push_back({array[left], array[middle], array[right]}); // Add combination to the result
        right--;
      }
      else if(sum > targetSum){
        right--; // If the sum is too big, decrement the largest number (right)
      }
      else{
        middle++; // If the sum is too low, increment the middle number
      }
    }
    right = array.size() - 1; // Reset value of right index
  }
  return result;
}
