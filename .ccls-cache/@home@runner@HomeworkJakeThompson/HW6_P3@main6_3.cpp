// Programmer: Jake Thompson
// Description: HW6_P3 Bronson Exercises 6.2 problem 7
// Date: 09/29/2022

#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

double powerGen(double H, double Q);

int main()
{
  cout << powerGen(14, 20);
  return 0;
}

double powerGen(double H, double Q)
{
  double g = 9.81;
  //1000kg/m^3
  double WaterDensity = 1000;
  return WaterDensity * Q * H * g;
}