// Programmer: Jake Thompson
// Description: Kattis Greedily Increasing Subsequence
// https://open.kattis.com/problems/hangman
// Date: 10/31/2022
// With John Thompson
#include <iostream>
#include <array>

using namespace std;

int count = 0;

int main() {
  int newMax, newArraySize;
  int N;
  cout << "Enter size of N: ";
  cin >> N;

  const int ARRAY_SIZE = N;
  int myArray[ARRAY_SIZE];
  int myNewArray[] = {0};

  cout << "Enter " << N << " integers: ";
  for (int index = 0; index < ARRAY_SIZE; index++) {
    cin >> myArray[index];
  }
  
}

