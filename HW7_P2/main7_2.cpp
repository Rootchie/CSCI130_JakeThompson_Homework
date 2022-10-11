// Programmer: Jake Thompson
// Description: Bronson Exercises 6.3 Exercise (Practice)
// Date: 10/11/2022

#include <iostream>
using namespace std;

void time(int seconds, int hours, int mins, int secs);
int main() {
  int hours, seconds, mins, secs;
  cout << "Input seconds: ";
  cin >> seconds;
  cout << endl;
  time(3600, hours, mins, seconds);
  return 0;
}
void time(int seconds, int hours, int mins, int secs) {
  // how many hours in seconds
  hours = seconds / 3600;
  // subtract hours from seconds
  seconds = seconds - (hours * 3600);
  // same for minutes
  mins = seconds / 60;
  seconds = mins - (mins * 60);
  // remainder of seconds = secs
  secs = seconds;
  
  return;
}