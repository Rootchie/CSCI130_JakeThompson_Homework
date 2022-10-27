// Programmer: Jake Thompson
// Description: Kattis Sort
// https://open.kattis.com/problems/sort
// Date: 10/11/2022

#include <iostream>
using namespace std;

/*********************** DESCRIPTION ******************************/
/* This code solves the Kattis problem "Sort" which can be found at
https://open.kattis.com/problems/sort  */

#include <iostream>
using namespace std;

/********************** PROTOTYPE FUNCTIONS ************************/
void freqSort(int list[], int listNew[], int length, int freqVals[],
              int numOccur[], const int OCCUR_SIZE);
void printArray(const int list[], int listSize);
void insertionSortParallel(int listA[], int listB[], int length);
void findDistinct(int list[], int out[], int length);
void initializeArray2Const(int list[], int listSize, int myConst);
int numDistinct(int list[], int length);

/************************* MAIN ************************************/

int main() {
  // read in length of array and create an array of that size
  int m;
  cin >> m;
  const int ARRAY_SIZE = m;
  int list[ARRAY_SIZE];
  int listNew[ARRAY_SIZE];

  // read in max freq
  int max_freq;
  cin >> max_freq; // we do nothing with this

  // read in array
  for (int i = 0; i < ARRAY_SIZE; i++) {
    cin >> list[i];
  }

  // find the number of different values in list
  int freqs;
  freqs = numDistinct(list, ARRAY_SIZE);

  // create parallel arrays with the length of the distinct frequencies
  const int OCCUR_SIZE = freqs;
  int freqVals[OCCUR_SIZE]; // parallel array to numOccur
  int numOccur[OCCUR_SIZE]; // parallel array to freqVals;
  initializeArray2Const(numOccur, OCCUR_SIZE, 0);

  // sort by frequency (largest to smallest)
  freqSort(list, listNew, ARRAY_SIZE, freqVals, numOccur, OCCUR_SIZE);

  // display answer
  cout << "The freqency sort results in: ";
  printArray(listNew, ARRAY_SIZE);

  // end
  return 0;
}

/********************** FUNCTIONS *********************************/
/* This function sorts a list by size by frequency (largest to smallest)
Parameters: list[] is the 1D array
            length is the size of the 1D array
            freq is the number of different frequencies */
void freqSort(int list[], int listNew[], int length, int freqVals[],
              int numOccur[], const int OCCUR_SIZE) {

  int n, smallestIndex, loc, temp;
  int count;

  // find all distinct frequencies
  findDistinct(list, freqVals, length);
  cout << "The different freqs are: ";
  printArray(freqVals, OCCUR_SIZE);

  // find the number of occurances
  for (n = 0; n < OCCUR_SIZE; n++) {
    // increment through each comparison
    for (loc = 0; loc < length; loc++) {
      if (list[loc] == freqVals[n])
        numOccur[n] += 1;
    }
  }
  cout << "The number of occurances are: ";
  printArray(numOccur, OCCUR_SIZE);

  // sort both freqVals and numOccurs together
  insertionSortParallel(numOccur, freqVals, OCCUR_SIZE);

  cout << "The number of occurances are (after sorting): ";
  printArray(numOccur, OCCUR_SIZE);
  cout << "Corresponding frequencies are (after sorting): ";
  printArray(freqVals, OCCUR_SIZE);

  count = 0;
  // Create new array based on info
  while (count < length) {
    // for each set of frquencies
    for (n = 0; n < OCCUR_SIZE; n++) {
      // increment through each comparison
      for (loc = 0; loc < numOccur[n]; loc++) {
        listNew[count] = freqVals[n];
        count++;
      }
    }
  }

  return;
}

/* This function prints the elements of an integer array as a single row.
  Parameters: list[] is the array
              listSize is the size of the array */
void printArray(const int list[], int listSize) {
  int index;

  for (index = 0; index < listSize; index++)
    cout << list[index] << " ";

  cout << endl;
  return;
}

/* This function sorts an array via the insertion sort algorithm. Specifically,
  it is conifgured to sort 2 parallel 1D arrays. Parameters: listA[] is the 1D
  array to be sorted listB[] is parallel to listA
              length is length of both A and B lists. */
void insertionSortParallel(int listA[], int listB[], int length) {
  int i, keyA, keyB, j;
  for (i = 1; i < length; i++) {
    keyA = listA[i];
    keyB = listB[i];
    j = i - 1;

    // Move elements of listA[0..i-1] that are greater than key, to one
    // position ahead of their current position
    while (j >= 0 && listA[j] < keyA) {
      listA[j + 1] = listA[j];
      listB[j + 1] = listB[j];
      j = j - 1;
    }
    listA[j + 1] = keyA;
    listB[j + 1] = keyB;
  }
  return;
}

/* This function finds all distinct elements in a given int array.
  Parameters: list[] is an integer array
              out[] is the output array
              length is the size aka length of list*/
void findDistinct(int list[], int out[], int length) {

  int loc = 0;
  int index = 0;
  int j = 0;

  // Pick all elements one by one
  for (index = 0; index < length; index++) {
    // Check if the picked element is already found
    for (j = 0; j < index; j++)
      if (list[index] == list[j])
        break;

    // If not found earlier, then save it to output array
    if (index == j) {
      out[loc] = list[index];
      loc++;
    }
  }

  return;
}

/* This function returns the number of distinct elements in a given int array.
  Parameters: list[] is an integer array
              length is the size aka length of list*/
int numDistinct(int list[], int length) {
  int num = 0;
  int index = 0;
  int j = 0;

  // Pick all elements one by one
  for (index = 0; index < length; index++) {
    // Check if the picked element is already found
    for (j = 0; j < index; j++)
      if (list[index] == list[j])
        break;

    // If not found earlier, then save it to output array
    if (index == j) {
      num++;
    }
  }

  return num;
}

/* This function initializes an integer array to be a constant
  Parameters: list[] is the array
              listSize is the size of the array
              myConst is the constant */
void initializeArray2Const(int list[], int listSize, int myConst) {
  int index;

  for (index = 0; index < listSize; index++)
    list[index] = myConst;

  return;
}

