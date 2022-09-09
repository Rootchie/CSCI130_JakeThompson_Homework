//Programmer: Jake Thompson
//Description: HW3_P1 Exercise 1 in Bronson Chapter 3
//Date: 09/09/2022

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
  //initialize variables (x1,y1), (x2,y2) and S(slope)
  double x1, y1, x2, y2, S;

  //input values for the slope equation
  cout << "x1 = ";
  cin >> x1;
  cout << endl;

  cout << "y1 = ";
  cin >> y1;
  cout << endl;

  cout << "x2 = ";
  cin >> x2;
  cout << endl;

  cout << "y2 = ";
  cin >> y2;
  cout << endl;

  //find slope
  S = ((y2 - y1)/(x2 - x1));
  cout << "S = " << S << endl;
  









  
}