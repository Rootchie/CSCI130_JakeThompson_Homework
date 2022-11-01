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
  
}