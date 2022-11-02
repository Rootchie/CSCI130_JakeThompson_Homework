// Programmer: Jake Thompson
// Description: Kattis Hangman
// https://open.kattis.com/problems/hangman
// Date: 10/31/2022
#include <iostream>
#include <iomanip>
using namespace std;

int findNumOfUniqueCharInStr(string myString);

int main() {
  string word;
  string guess;
  string npos;
  cin >> word;
  cin >> guess;

  int l = findNumOfUniqueCharInStr(word);
  int bodyParts = 0;

  for (int i = 0; i < 26; i++) {
    if (word.find(guess[i]) != string::npos) 
      l--;
    else 
      bodyParts++;
    if (bodyParts == 10) 
      cout << "LOSE";
    if (l == 0)
      cout << "WIN";
    }
}

// find the unique values in a string
int findNumOfUniqueCharInStr(string myString) {
  const int L = myString.length();
  char unique[L]; // set all to NULL
  int n, k;

  // setup unique to store the first value of the string and then all NULLs
  unique[0] = myString [0];
  // initialize all other spots in unique to be NULL
  for (n = 1; n < L; n++) {
    unique[n] = '\0';
  }
  int j = 1;
  bool FLAG;

  // fill unique
  for (n = 1; n < L; n++) {
    FLAG = false; // meaning it does not exist
    for (k = 0; k < L; k++) {
      if (myString[n] == unique[k]) // then found it does exist
        FLAG = true;
    }
    // if it didn't exist we will add it in to unique
  if (FLAG == false) {
    unique[j] = myString[n];
    j++;
    }
  }
  return j;
}