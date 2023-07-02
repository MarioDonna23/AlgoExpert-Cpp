/*
https://www.algoexpert.io/questions/monotonic-array
*/

#include <vector>
using namespace std;

bool isMonotonic(vector<int> array) {
  if(array.size() == 0 || array.size() == 1){ // true for arrays of size 0 and 1
    return true;
  }

  /* Check if it is going to be increasing or decreasing */
  unsigned int i = 1;
  bool increasing = false;
  
  while(array[i] == array[i-1]){
    if(i == array.size() - 1){
      return true;
    }
    else{
     i++; 
    }
  }
  if(array[i] > array[i-1]){
    increasing = true;
  }

  /* Iterate through the array and check if it is monotonic */
  if(increasing){
    for(i; i<array.size(); i++){
      if(array[i] < array[i-1]){
        return false;
      }
    }
  }
  else{
    for(i; i<array.size(); i++){
      if(array[i] > array[i-1]){
        return false;
      }
    }
  }
  return true;
}
