// Programmer: Jake Thompson
// Description: HW4_P4 Kattis Jumbo Javelin
// https://open.kattis.com/problems/jumbojavelin
// Date: 09/16/2022

#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

int main() 
{
  // declare and read in integer cases, being number of cases
  int cases;
  cin >> cases;
  // declare variables for x(t)
  double V0, Angle, deltaX, h1, h2;
  // declare the variable needed to change angle from degrees to radian
  double toRadians = acos(-1) / 180;
  // create a while that, while (cases - 1) is greater than zero, time and deltaY are calculated
  while (cases-- > 0) 
    {
    cin >> V0 >> Angle >> deltaX >> h1 >> h2;
    double time = deltaX / V0 / cos(Angle * toRadians);
    double deltaY = V0 * time * sin(Angle * toRadians) - .5 * 9.81 * time * time;
    }
  // if deltaY >= h1 + 1 and deltaY <= h2 - 1 output Safe
  
  // else output Not Safe
  }