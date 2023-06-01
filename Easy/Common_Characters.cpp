/*
Write a function that takes in a non-empty list of non-empty strings and
returns a list of characters that are common to all strings in the list,
ignoring multiplicity.

Note that the strings are not guaranteed to only contain alphanumeric characters. The list
you return can be in any order.
*/

#include <string>
#include <vector>
#include <unordered_set>
using namespace std;

vector<string> commonCharacters(vector<string> strings) {
  vector<string> result; // Vector to store the common characters
  /* Create a set of characters of the first word of the array */
  unordered_set<char> chars; 
  for (char x : strings[0]){
    chars.insert(x);
  }
  /* Look all characters inside the set in all the words */
  unsigned int counter = 0;
  for(char c : chars){ // Iterate through all the characters in the set
    for(string word : strings){ // Iterate through all the strings in the parameter vector
      for(char x : word){ // Iterate through all the characters in the string
        if(c == x){
          counter++;
          break;
        }
      }
    }
    if(counter == strings.size()){ // If any character appeared in all the words, add it to the result vector
      string s(1, c);
      result.push_back(s);
      counter = 0;
    }
    else{
      counter = 0; // Reset the counter
    }
  }
  return result; 
}
