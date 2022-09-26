// Programmer: Jake Thompson
// Description: HW5_P1 Importing a *.dat file using a while loop
// Date: 09/21/2022

#include <fstream>
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

int main() {
  // declare variables
  string firstName;
  string date;
  int TestResult;
  int count = 0;
  double cumulative_cases = 0;

  // declare stream variables
  ifstream inFile;  // needed to access the file we want to load
  ofstream outFile; // needed to save the results of the analysis

  // open the input file
  inFile.open("TestResultsData.dat");

  // open the output file
  outFile.open("AnalyzedData.txt");

  // read in the date - first line file
  inFile >> date;
  cout << date << endl;

  // add date to the output file as the first line
  outFile << date << endl;

  // read in the 2 pieces of info on the second line
  inFile >> firstName;
  cout << firstName << ' ';
  inFile >> TestResult;
  cout << TestResult << endl;

  while (inFile) {
    // update number of cases & persons tested
    cumulative_cases += TestResult;
    count++; // increment the number of patients

    // read in the next line
    inFile >> firstName;
    inFile >> TestResult;
  }
  outFile << "Total Number Cases = " << cumulative_cases << endl;
  outFile << "Number of person tested = " << count << endl;

  // report prevalence as % with 2 decimals
  outFile << fixed << showpoint << setprecision(2);
  outFile << "The prevalence is ";
  outFile << ((static_cast<double>(cumulative_cases)) / count) * 100;
  outFile << " %" << endl;

  inFile.close();
  outFile.close();

  return 0;
}