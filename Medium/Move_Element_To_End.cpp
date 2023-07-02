/*
https://www.algoexpert.io/questions/move-element-to-end
*/

#include <vector>
using namespace std;

vector<int> moveElementToEnd(vector<int> array, int toMove) {
  if(array.size() == 0 || array.size() == 1){ // Return empty arrays or arrays of size 1
    return array;
  }
  unsigned int end = array.size()-1; 
  for(unsigned int i=0; i<end; i++){
    if(array[i] == toMove){
      while((array[end] == toMove) && (end > i)){
        end--;
      }
      swap(array[i], array[end]);
    }
  }
  return array;
}
