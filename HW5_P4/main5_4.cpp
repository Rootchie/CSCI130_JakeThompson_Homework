// Programmer: Jake Thompson
// Description: HW5_P4 Kattis Modulo
// https://open.kattis.com/problems/modulo
// Date: 09/25/2022

#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
  bool modulo [42];
  cout << "Enter ten number values: " << endl;

  for (int i = 0; i < 42; i++) //loop for bool modulo [42] value
  {
    modulo [1] = false;
  }
  for (int k = 0; k < 10; k++) //use mod math with number inputs
  {                            //then output true statement for modulo [42]
    int num_values;
    cin >> num_values; //input ten values into for loop for mod math
    modulo [num_values % 42] = true;
  }
  int dist_value = 0;

  for (int g = 0; g < 42; g++)
  {
    if (modulo [g]) //if modulo is less than 42
                    //then distinct values add up until limit is reached
    {
      dist_value++;
    }
  }
  cout << "The distinct value is: " << dist_value << endl;
  return 0;
}