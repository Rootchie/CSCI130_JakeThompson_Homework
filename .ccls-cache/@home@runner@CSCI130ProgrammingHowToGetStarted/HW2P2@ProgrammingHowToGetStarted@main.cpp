//Programmer: Jake Thompson
//Description: CSCI 130 – An Example of How to Solve & Approach Coding Problems
//Date Created: 08/30/2022
#include <iostream>

#include <cmath>

using namespace std;
int main() {
  //Initialize variables, we want to be specific     to decimal, using type double
  double P, l, S, r;
  double l_in;
  const double pi = 3.1415926535;
  //Input P, l, S for Rider Force [lbs], Crank       arm   length [mm], Stress [psi]
  //P
  cout << "Enter Rider Force (P) in lbs: ";
  cin >> P;
  cout << endl;
  //l
  cout << "Enter Crank arm Length (l) in mm: ";
  cin >> l;
  cout << endl;
  //S
  cout << "Enter Stress (S) in psi: ";
  cin >> S;
  cout << endl;

  //Convert l units to inches
  l_in = 1/25.4;
  
  //Calculate r = cbrt((l*P)/(pi*S)) and pi =        3.1415926535
  r = cbrt((l_in*P)/(pi*S));
    
  //Display r
  cout << "r = " << r << endl;
  return 0;
}