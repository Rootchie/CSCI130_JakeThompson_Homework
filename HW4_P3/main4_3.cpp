//Programmer: Jake Thompson
//Description: HW4_P3 Kattis Last Factorial Digit
//https://open.kattis.com/problems/lastfactorialdigit
//Date: 09/13/2022

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
  //read in the # of test cases
  int num_cases;
  cin >> num_cases;
  
  //declare variables for loop
  int fac_val;
  
  //need a loop to run all test cases
  for (int i = 0; i < num_cases; i++){
  //read in value for calculation
    cin >> fac_val;
    int value = 1;
    
  //make calculation (this may require a loop)
    for (int k = 0; k < fac_val; k++){
      value = value * (k + 1);
    }
  //find and output the last digit (value % 10)
  cout << value % 10 << endl;
  }
return 0;
}