//Programmer: Jake Thompson
//Description: HW3_P3 Exercise 9 in Bronson Chapter 3
//Date: 09/09/2022

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
  ///////////////////////////////////////////////////////
  //Initialize variables
  //E is the voltage of the battery in volts
  //R is the value of the resistor in ohms
  //C is the value of the capacitor in farads
  //t is the time in seconds after the switch is closed
  //e is Euler’s number, which is 2.71828 
  //i current flowing through RC circuit
  //RC is the time constant
  ///////////////////////////////////////////////////////
  double E, R, RC, t, e, i;

  //prompt user input for variables
  cout << "Battery voltage = ";
  cin >> E;
  cout << endl;

  cout << "Resister value = ";
  cin >> R;
  cout << endl;

  cout << "Time after the switch is closed = ";
  cin >> t;
  cout << endl;

  e = 2.71828;
  cout << "Euler's number(e) = " << e << endl;

  cout << "\nTime constant = ";
  cin >> RC;
  cout << endl;

  //find i using i = (E/R)*pow(e, (-t/RC))
  i = (E/R)*pow(e, (-t/RC));
  cout << "Current flowing through RC curcuit = " << i << endl;

  return 0;
}