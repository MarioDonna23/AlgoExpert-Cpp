/*
  Given an array of positive integers representing the values of coins in your
  possession, write a function that returns the minimum amount of change (the
  minimum sum of money) that you cannot create. The given coins can have
  any positive integer value and aren't necessarily unique (i.e., you can have
  multiple coins of the same value).
*/

#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int nonConstructibleChange(vector<int> coins) 
{
  int change = 0;
  sort(coins.begin(), coins.end());
  // Iterate through the sorted coins
  for(int i=0; i<coins.size(); i++)
  {
    if(coins[i] > change+1)
    {
       return change+1;
    }
    else
    {
       change += coins[i];
    }
  }
  return change+1;
}
