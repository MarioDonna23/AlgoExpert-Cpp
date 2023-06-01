
/* 
Given a non-empty string of lowercase letters and a non-negative integer
representing a key, write a function that returns a new string obtained by
shifting every letter in the input string by k positions in the alphabet,
where k is the key.

Note that letters should "wrap" around the alphabet; in other words, the
letter "z" shifted by one returns the letter "a" 
*/
  
#include <string>
using namespace std;

string caesarCypherEncryptor(string str, int key) {
  int diff = 0;
  int size = str.size();
  int modded_key = key % 26; // 26 is a complete loop, so you only need to know the remainder. e.g : 27 == 1
  string shifted = str;
  
  for(int i=0; i<size; i++){ // Iterate through all the characters in the array
    diff = (int)str[i] + modded_key; // Shift the char by the modded key by adding to its int representation
    if(diff <= 122){ // Anything greater than 122 is no longer a letter
      shifted[i] = (char)diff;
    }
    else{
     shifted[i] = (char)(96 + diff % 122); // 97 = a, we need to calculate which letter it became after shift
    } 
  }
  return shifted;
}
