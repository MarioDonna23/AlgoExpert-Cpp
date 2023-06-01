#include <string>
using namespace std;

string runLengthEncoding(string str) {
  char currentChar = str[0];
  char count = '1';
  string result;

  if(str.size() == 1){ // If the size of the string is 1, simply return the char with count of 1
    result.push_back(count);
    result.push_back(currentChar);
    return result;
  }
  
  for(int i=0; i<str.size(); i++){
    if(str[i+1] == currentChar){ // If the next char is the same as the current one
      if(count=='9'){ // Verify if the count is at the maximum of 9
        result.push_back(count);
        result.push_back(currentChar);
        count = '1'; // Reset the count to 1
      }
      else{
        count++; // If it is not 9, simply increment it by 1
      }
    }
    else{ // If the next char is not the same as the current one, the current sequence is over
      result.push_back(count);
      result.push_back(currentChar);
      currentChar = str[i+1]; // Go to the next char
      count = '1'; // Reset counter to 1
    }
  }
  return result;
}
