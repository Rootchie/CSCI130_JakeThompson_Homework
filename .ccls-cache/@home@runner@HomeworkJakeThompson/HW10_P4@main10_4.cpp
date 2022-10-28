// Programmer: Jake Thompson
// Description: Bronson Exercises 10.3 Exercise 1
// Date: 10/28/2022
#include <iostream>
using namespace std;

int main() {
  const int NUMS = 5;

  int nums[NUMS] = {16, 54, 7, 43, -5};
  int total = 0, *nPt;

  nPt = nums; // store address of nums[0] in nPt
  while (nPt < nums + NUMS) {
    total += *nPt++;
  }
  cout << "The total of the array elements is " << total << endl;
  return 0;
}