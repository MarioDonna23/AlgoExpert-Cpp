#include <vector>
#include <limits.h>

using namespace std;

vector<int> selectionSort(vector<int> array) {
  unsigned int size = array.size() - 1;
  unsigned int i,pivot;
  int min_value = array[0]; 
  
  for(pivot=0; pivot < size; pivot++){
    int min_index = pivot;
    for(i=pivot+1; i <= size; i++){
      if(array[i] < min_value){
        min_value = array[i]; // Look for the smallest value
        min_index = i;
      }
    }
    swap(array[pivot], array[min_index]); // Swap the pivot with the smallest value
    min_value = array[pivot+1];
  }
  return array;
}