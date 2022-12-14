// Programmer: Jake Thompson
// Description: Bronson Exercises 6.3 Exercise 5 (Practice)
// Date: 10/11/2022

#include <iostream>
using namespace std;

void time(int seconds, int &hours, int &mins, int &secs);
int main() {
  int hours, seconds, mins, secs;
  cout << "Input seconds: ";
  cin >> seconds;
  cout << endl;
  time(seconds, hours, mins, seconds);
  return 0;
}
void time(int seconds, int &hours, int &mins, int &secs) {
  // how many hours in seconds
  hours = seconds / 3600;
  // subtract hours from seconds
  seconds -= hours * 3600;
  // same for minutes
  mins = seconds / 60;
  seconds -= mins * 60;
  // remainder of seconds = secs
  secs = seconds;

  cout << "Equivalent number of hours = " << hours << endl;
  cout << "Equivalent number of minutes = " << mins << endl;
  cout << "Remaining seconds = " << secs << endl;

  return;
}