/*
Write a function that takes in a string of lowercase English-alphabet letters
and returns the index of the string's first non-repeating character.
The first non-repeating character is the first character in a string that
occurs only once.
If the input string doesn't have any non-repeating characters, your function
should return 
*/

#include <string>
#include <map>
using namespace std;

int firstNonRepeatingCharacter(string string) {
  int index = INT_MAX; // Index of the first non repeating character
  map<char,int> hm; // Hash map to store each character and its index
  /* Iterate through the string and add characters into hm */
  for(int i=0; i<string.size(); i++){
    if(hm.find(string[i]) != hm.end()){ // If the character is already on the map
      hm[string[i]] = INT_MAX; // Change the index to MAX, to mark it as disqualified
    }
    else{
      hm.insert(make_pair(string[i],i)); // If not on the map, add it with its index
    }
  }
  /* Iterate through the map and find the smallest index */
  for(auto it=hm.begin();it != hm.end();it++){
    if (it->second < index){
      index = it->second;
    }
  }
  if(index == INT_MAX){
    index = -1;
  }
  return index;
}
