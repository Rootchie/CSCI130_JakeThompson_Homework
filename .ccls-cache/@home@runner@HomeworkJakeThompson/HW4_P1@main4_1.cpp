//Programmer: Jake Thompson
//Description: HW4_P1 Bronson Exercises 4.1 practice problem 1
//Date: 09/13/2022

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() 
{
  int a = 5;
  int b = 2;
  int c = 4;
  int d = 6;
  int e = 3;
  //1 = true, 0 = false
  cout << (a > b) << endl;
  cout << (a != b) << endl;
  cout << ((a % b) == (c % b)) << endl;
  cout << ((a * c) != (d * b)) << endl;
  cout << ((d * b) == (c * e)) << endl;
  cout << (!(a * b)) << endl;
  cout << (!(a % b * c)) << endl;
  cout << (!(c % b * a)) << endl;
  cout << (b % c * a) << endl;
}