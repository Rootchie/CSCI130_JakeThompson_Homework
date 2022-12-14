//Programmer: Jake Thompson
//Description: Practice with manipulators
//Date: 09/05/2022

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() 
{
  //initialize variables
  int C0;
  double Ct, A, m, r, t;
  
  //input values for equation(2)
  cout << "m = "; //degree of the polynomial equation
  cin >> m; 
  cout << endl;
  
  cout << "C(0) = "; //Initial disease prevelance
  cin >> C0;
  cout << endl;
  
  //find A using equation(2), and display A value
  A = pow(C0, 1/m);
  cout << "A = " << A << endl;
  
  //input values for equation(1)
  cout << "\nr = "; //growth rate parameter
  cin >> r;
  cout << endl;

  cout << "t = "; // t measured in days
  cin >> t;
  cout << endl;

  //convert t(weeks to t(days) since the time point is displayed in weeks
  t = t*7;

  //find C(t) using equation(1), and display C(t) value
  Ct = pow((((r/m)*t)+A), m); //cumulative number of cases in time
  cout << "C(t) = " << Ct << endl;

  //cout << setprecision(2) << fixed;
  cout << fixed << showpoint;
  cout << "C(" << t/7.0 << ") = " << Ct << endl;
  
  cout << setprecision(0) << fixed;
  cout << "C(" << t/7.0 << ") = " << setprecision(0) << scientific << Ct << endl;

  //test formatting from setw
  cout << setprecision(0) << fixed;
  cout << setw(10) << "Your input is being evaluated...";
  cout << "\n";
  cout << setw(10) << "C(" << t/7.0 << ") = " << Ct << endl;
  
  cout << "We recommend trying the following time points: \n";
  cout << setw(5) << 10 << setw(7) << 20 << setw(7) << 50 << endl;

  cout << "We recommend trying the following time points: \n";
  cout << setw(5) << setfill('*') << 10;
  cout << setw(7) << setfill('*') << 20;
  cout << setw(7) << setfill('#') << 50 << endl;
  return 0;
}