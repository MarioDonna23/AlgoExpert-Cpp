#include <iostream>
#include <typeinfo>
#include <any>
#include <vector>
using namespace std;
/*
int productSum(vector<any> array, int multiplier = 1) {
  int sum = 0;
  
  for (auto el:array){ // Iterate through the elements
    if (el.type() == typeid(vector<any>)){ // If it is a vector
      sum += productSum(any_cast<vector<any>>(el), multiplier + 1); // Recursively increase the multiplier and add
    }  
    else{
      sum += any_cast<int>(el); // If it sn integer, just add it
    }
  }
  return sum * multiplier;
}
*/

/* CODE MUST BE UNCOMMENTED, FOR SOME REASON IT MARKS ERROR ON VSCODE */