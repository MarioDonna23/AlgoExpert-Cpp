/* 
  Write a function that takes in a non-empty array of integers that are sorted
  in ascending order and returns a new array of the same length with the squares
  of the original integers also sorted in ascending order.
*/

#include <vector>
#include <cstdlib>
using namespace std;

vector<int> sortedSquaredArray(vector<int> array) 
{
  vector<int> result(array.size(),0); // Copy original array into a new one
  int right = array.size() - 1; // End of the array
  int left = 0; // Beginning of the array

  for(int index = array.size() - 1; index >=0; index--) // Iterate from end to beginning
  {
     if(abs(array[right]) >= abs(array[left])) // Compare absolute values of right and left
     {
       result[index] = array[right] * array[right]; // If right is bigger, add its square to current index
       right--;
     }
     else
     {
       result[index] = array[left] * array[left]; // If left is bigger, add its square to current index
       left++; 
     }
  }
  return result;
}
