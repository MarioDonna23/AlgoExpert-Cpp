#include <vector>
#include <limits.h>
using namespace std;

vector<int> findThreeLargestNumbers(vector<int> array) {
  int max1,max2,max3 = INT_MIN; // Variables for the three greatest numbers
  vector<int> result; // Vector for the solution
  
  for(int x:array){
    if(x >= max3){ // Check if the current number is the biggest number
      max1 = max2; // If it is, pass the current greatest numbers down
      max2 = max3;
      max3 = x; // Add the new biggest number
    }
    else if(x >= max2){ // Check if it is the second biggest
      max1 = max2; // Pass down 
      max2 = x; // Add new number
    }
    else if(x >= max1){ // If it is the third biggest
      max1 = x; // Replace the third biggest
    }
  }
  result.push_back(max1); // Add the numbers to the result vector
  result.push_back(max2);
  result.push_back(max3);
  return result;
}
