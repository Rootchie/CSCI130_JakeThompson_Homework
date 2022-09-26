// Programmer: Jake Thompson
// Description: HW5_P2 break practice
// Date: 09/25/2022
#include <stdio.h>
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  int dataTemp;
  
  // load input file
  ifstream inFile; // declare stream variable
  inFile.open("NumberData1.txt");

  // load all data in while loop
  while (!inFile.eof()) 
  {
    inFile >> dataTemp;
    cout << dataTemp << endl;
  }
}
