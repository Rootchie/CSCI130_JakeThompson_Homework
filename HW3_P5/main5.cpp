//Programmer: Jake Thompson
//Description: Kattis Sort Two numbers
//https://open.kattis.com/problems/sorttwonumbers
//Date: 09/09/2022

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
  int a, b;
  cin >> a >> b;
  cout << endl;
  if (a<b)
  {
    cout << a <<' '<< b << endl;
  }
    else if (b<a)
    {
      cout << b <<' '<< a << endl;
    }
  else
  {
    cout << a <<' '<< b << endl;
  }
  return 0;
}