// Programmer: Jake Thompson
// Description: Kattis Grass Seed Inc.
// https://open.kattis.com/problems/grassseed
// Date: 09/25/2022

#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
  //initialize variables
  int NumLawns;
  double SeedCost;
  double At;

  //read in variables (number of lawns and seed cost)
  cin >> SeedCost;
  cin >> NumLawns;

  //loop for calculating area
  for (int i = 0; i < NumLawns; i++)
    {
      //initialize variables for calculation
      double length;
      double width;

      //read in variables
      cin >> length >> width;

      //use equation for area of square/rectangle
      At += length * width;
    }
  cout << setprecision(6) << fixed;
  cout << (SeedCost * At) << endl;
  return 0;
}