// Programmer: Jake Thompson
// Description: Bronson Exercises 13.2, Exercise 5
// Date: 10/31/2022
#include <iostream>
using namespace std;

struct car{
int num;
int miles;
int gallons;};

int main() {
  const int NumCars = 5;
  car cars[NumCars];
  for (int i = 0; i < NumCars; i++) {
    cin >> cars[i].num;
    cin >> cars[i].miles;
    cin >> cars[i].gallons;
  }
  double totalMPG = 0;
  for (int i = 0; i < NumCars; i++) {
    double mpg = cars[i].miles / cars[i].gallons;
    totalMPG += mpg;
    cout << "Car number " << cars[i].num << " used "
         << mpg << " miles per gallon." << endl;
  }
  cout << "Average miles per gallon = " 
       << totalMPG / NumCars << endl;
  
  return 0;
}