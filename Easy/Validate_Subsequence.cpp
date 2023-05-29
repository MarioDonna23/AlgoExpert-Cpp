/* 
  Given two non-empty arrays of integers, write a function that determines
  whether the second array is a subsequence of the first one.
  A subsequence of an array is a set of numbers that aren't necessarily adjacent
  in the array but that are in the same order as they appear in the array.  
*/

#include <vector>
using namespace std;

bool isValidSubsequence(vector<int> array, vector<int> sequence) 
{
  int counter = 0;
  for(int i=0; i<array.size(); i++)
  {
    if(array[i] == sequence[counter]) // Check if the value in the array is equal to our current num in the sequence
    {
      counter ++; // If it is, go to the next number in the sequence
    }
  }
  if(counter == sequence.size()) return true; // If we get to the end of the sequence, return True
  else return false;
}
