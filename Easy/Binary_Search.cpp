#include <vector>
using namespace std;

int binarySearch(vector<int> array, int target) {
  int left = 0; // Beginning of the array
  int right = array.size()-1; // End of the array
  
  while(left <= right){
    int middle = (left + right) / 2; // Calculate the middle of the array
    int potentialMatch = array[middle]; // Look at the middle of the array

    if(target == potentialMatch){ // If it is a match, return the index
      return middle;
    }
    else if(target < potentialMatch){ // If the target is smaller
      right = middle - 1; // Position right bound one before of the middle
    }
    else{ // If target is bigger 
      left = middle + 1; // Position left bound one after of the middle
    }
  }
  return -1;
}
