// Programmer: Jake Thompson
// Description: Kattis Greedily Increasing Subsequence
// https://open.kattis.com/problems/hangman
// Date: 10/31/2022
// With John Thompson Eric and Edwin
#include <iostream>
#include <array>

using namespace std;

void sortArray(int myArray[], int ARRAY_SIZE, int newMax);
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

  sortArray(myArray, ARRAY_SIZE, newMax);
}

void sortArray(int myArray[], int ARRAY_SIZE, int newMax) {
    for (int index = 0; index < ARRAY_SIZE; index++) {
    if (index == 0) {
      newMax = myArray[index];
      cout << newMax << " ";
      count++;
    }
    else if(newMax < myArray[index] && index > 0) {
      newMax = myArray[index];
      cout << newMax << " ";
      count++;
    }
  }
  cout << "\nThe new array size is: " << count << endl;
}