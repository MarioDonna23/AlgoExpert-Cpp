#include <vector>
using namespace std;

vector<int> bubbleSort(vector<int> array) {
  int i = 0;
  bool sorted = false;

  while(!sorted){
    sorted = true;
    for(i=0; i < array.size() - 1; i++){
      if(array[i] > array[i+1]){ // If the next value is smaller
        swap(array[i], array[i+1]); // Swap the current value with the next
        sorted = false; // Set sorted as false, until the array is completely sorted
      }
    }
  }
  return array;
}
