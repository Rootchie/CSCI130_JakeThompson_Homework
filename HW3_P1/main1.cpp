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
  cout << "r = "; //growth rate parameter
  cin >> r;
  cout << endl;

  cout << "t = "; // t measured in days
  cin >> t;
  cout << endl;

  //convert t(weeks to t(days) since the time point is displayed in weeks
  t = t*7;

  
  
  
  
  
  
  
  

  
  
  
  
  
  
  
  
}