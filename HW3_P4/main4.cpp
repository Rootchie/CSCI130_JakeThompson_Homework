//Programmer: Jake Thompson
//Description: Kattis Pizza Crust: https://open.kattis.com/problems/pizza2
//Date: 09/09/2022

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
  double R, C, p;
  
  cin >> R;
  cout << endl;
  
  cin >> C;
  cout << endl;
  
  p = (((R-C)*(R-C))/(R*R))*100;
  cout << setprecision(6) << fixed;
  cout << fixed << showpoint;
  cout << p << endl;
  
  return 0;
}