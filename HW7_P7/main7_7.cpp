// Programmer: Jake Thompson
// Description: Bronson Exercises 7.2 Exercise 4 (Electrical Eng.)
// Date: 10/11/2022
// Note: John Thompson and I worked on this problem together

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int Totalr(double resistance[], int listSize);
int Totalc(double current[], int listSize);
int Totalp(double power[], int listSize);
const int ARRAY_SIZE = 5;
int main() {
  double resistance[ARRAY_SIZE] = {16, 27, 39, 56, 81};
  double current[ARRAY_SIZE];
  double power[ARRAY_SIZE];
  
  for (int i = 0; i < 5; i++) {
    cin >> current[i];
  }
  for (int i = 0; i < 5; i++) {
    power[i] = resistance[i] *  pow(current[i], 2);
  }
  cout << setprecision(2);
  cout << setw(10) << "Resistance"
       << setw(4) << ' '
       << setw(10) << "Current"
       << setw(4) << ' '
       << setw(10) << "Power" << endl;

  for (int i = 0; i < 5; i++) {
    cout << setw(10) << resistance[i]
         << setw(4) << ' '
         << setw(10) << current[i]
         << setw(4) << ' '
         << setw(10) << power[i] << endl;
  }
  int totalr;
  totalr = Totalr(resistance, ARRAY_SIZE);
  cout << "Total: " << totalr;
  int totalc;
  totalc = Totalc(current, ARRAY_SIZE);
  cout << setw(14) << totalc;
  double totalp;
  totalp = Totalp(power, ARRAY_SIZE);
  cout << setw(14) << totalp << endl;
}

int Totalr(double resistance[], int listSize) {
  int totalr = 0;
  for (int index = 0; index < listSize; index++) {
    totalr = totalr + resistance[index];
  }
  return totalr;
}
int Totalc(double current[], int listSize) {
  int totalc = 0;
  for (int index = 0; index < listSize; index++) {
    totalc = totalc + current[index];
  }
  return totalc;
}
int Totalp(double power[], int listSize) {
  double totalp = 0;
  for (int index = 0; index < listSize; index++) {
    totalp = totalp + power[index];
  }
  return totalp;
}