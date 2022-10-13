// Programmer: Jake Thompson
// Description: Bronson Exercises 7.2 Exercise 4 (Electrical Eng.)
// Date: 10/12/2022

#include <iostream>
#include <cmath>
using namespace std;

int main() {
  double resistance[5] = {16, 27, 39, 56, 81};
  double current[5];
  double power[5];
  
  for (int i = 0; i < 5; i++) {
    cin >> current[i];
  }
  for (int i = 0; i < 5; i++) {
    power[i] = resistance[i] *  pow(current[i], 2);
  }
  cout << setprecision(2);
  
  
}