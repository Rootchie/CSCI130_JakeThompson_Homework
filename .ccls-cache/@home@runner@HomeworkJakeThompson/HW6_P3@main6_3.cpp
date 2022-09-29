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
  //test 1
  cout << powerGen(14, 20) << " Watts" << endl;
  //test 2
  cout << powerGen(30, 20) << " Watts" << endl;
  return 0;
}

double powerGen(double H, double Q)
{
  double g = 9.81;
  //1000kg/m^3
  double WaterDensity = 1000;
  return WaterDensity * Q * H * g;
}
//test 1 = 2.7468e+06, or 2746800 Watts
//test 2 = 2.886e+06, or 5886000 Watts