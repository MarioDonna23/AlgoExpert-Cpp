/*
Write a function that takes in a list of unique strings and returns a list of
semordnilap pairs.
A semordnilap pair is defined as a set of different strings where the reverse
of one word is the same as the forward version of the other. For example the
words "diaper" and "repaid" are a semordnilap pair, as are the words
"palindromes" and "semordnilap".
The order of the returned pairs and the order of the strings within each pair
does not matter.
*/

#include <string>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

vector<vector<string>> semordnilap(vector<string> words) {
  vector<vector<string>> result;
  /* Create a Set with all the words */
  set<string> words_set(words.begin(), words.end());
  /* Go through the words, reverse them and look for them in the set */
  for (string word : words){
    string reversedWord = word;
    reverse(reversedWord.begin(), reversedWord.end());
    if(words_set.find(reversedWord) != words_set.end() && word != reversedWord){
      result.push_back({word,reversedWord});
      words_set.erase(word);
      words_set.erase(reversedWord);
    }
  }
  return result;
}

