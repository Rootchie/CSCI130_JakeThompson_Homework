//Programmer: Jake Thompson
//Description: HW4_P2 Bronson Exercises 4.2 practice problem 3
//Date: 09/13/2022

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() 
{
  int a, b;
  cout << "Number 1(a) = ";
  cin >> a;
  cout << endl;

  cout << "Number 2(b) = ";
  cin >> b;
  cout << endl;

  if (a > b)
  {
    cout << "The first number is greater" << endl;
  }
  else
  {
    cout << "The first number is smaller" << endl;
  } 
  // when input 5 and 8, output is "The first number is smaller"
  // when input 11 and 2, output is  "The first number is smaller"
}