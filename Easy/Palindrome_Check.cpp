#include <string>
using namespace std;

bool isPalindrome(string str) {
  int size = str.size() - 1;
  string reversed = str; 

  /* Reverse the string and compare it to the original */
  for(int i=0; i<str.size(); i++){
    reversed[i] = str[size];
    size--;
  }
  
  return str == reversed;
}
