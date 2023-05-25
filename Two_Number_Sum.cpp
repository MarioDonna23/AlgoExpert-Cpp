/* 
  Write a function that takes in a non-empty array of distinct integers and an
  integer representing a target sum. If any two numbers in the input array sum
  up to the target sum, the function should return them in an array, in any
  order. If no two numbers sum up to the target sum, the function should return
  an empty array.
*/

#include <vector>
#include <unordered_set>
using namespace std;

vector<int> twoNumberSum(vector<int> array, int targetSum) {
  vector<int> result;
  unordered_set<int> numbers; 
  int target;
  
  for(int num : array)
  {
    target = targetSum - num; // target will be the number we need to add to our current number to get the sum
    if(numbers.find(target) != numbers.end()) // Look for target number in the set
    {
      result.push_back(target); // If the number is found, push them both to the result array
      result.push_back(num);
      return result;
    }
    else
    {
       numbers.insert(num); // If not found, add the current number to the set
    }
  }

  return {}; // If not solution, return empty array
}
