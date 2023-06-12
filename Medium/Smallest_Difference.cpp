/*
https://www.algoexpert.io/questions/smallest-difference
*/

#include <vector>
#include <limits.h>
#include <algorithm>
using namespace std;

vector<int> smallestDifference(vector<int> arrayOne, vector<int> arrayTwo) {
  int min_diff, prev_diff = INT_MAX;
  int diff, result_one, result_two;
  vector<int> result; // Vector to store the result
  
  sort(arrayOne.begin(), arrayOne.end()); // Sort Array 1
  sort(arrayTwo.begin(), arrayTwo.end()); // Sort Array 2

  for(int i=0; i<arrayOne.size(); i++){   // Set i as pivot in array one
    for(int j=0; j<arrayTwo.size(); j++){ // Iterate array Two
      prev_diff = INT_MAX; // Reset Previous Diff
      diff = abs(arrayOne[i] - arrayTwo[j]); // Calculate the absolute difference
      if(diff < min_diff){ // If we find a new minimum difference
        min_diff = diff; // Save new min diff
        result_one = i; // Save index of array one 
        result_two = j; // Save index of array two
      }
      if(diff > prev_diff){ // If previous difference was lower
        break; // Then you can stop checking values in array Two with current pivot
      }
      else{
        prev_diff = diff; // Otherwise update previous difference
      }
    }
  }

  result.push_back(arrayOne[result_one]);
  result.push_back(arrayTwo[result_two]);
  return result;
}
