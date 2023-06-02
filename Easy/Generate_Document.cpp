
/*
You're given a string of available characters and a string representing a
document that you need to generate. Write a function that determines if you
can generate the document using the available characters. If you can generate
the document, your function should return true ; otherwise, it should return false.
*/

#include <string>
#include <map>
using namespace std;

bool generateDocument(string characters, string document) {
  map<char,int> hm; // Hash map with each unique character and their frequency
  /* Iterate through the string and update the hash map accordingly */
  for(char c: characters){
    if(hm.find(c) == hm.end()){ // If it is not on the map
      hm[c] = 0; // Add it with a frequency of zero
    }
    hm[c]++; // Increment the frequency. 
  }
  /* Search for document characters in hash map */
  for(char c: document){
    if(hm.find(c) == hm.end() || hm[c] == 0){ // If it is not in the map, return false
      return false;
    }
     hm[c]--; // If it is, decrease the frequency
  }
  return true;
}
