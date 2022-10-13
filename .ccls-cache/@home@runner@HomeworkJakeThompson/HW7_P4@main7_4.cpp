// Programmer: Jake Thompson
// Description: Kattis License to Launch
// https://open.kattis.com/problems/licensetolaunch
// Date: 10/11/2022
// collab with John Thompson

#include <cmath>
#include <iostream>
using namespace std;

int daycount(int days);
int main() {
  int days;
  days = daycount(days);
  cout << "The number of days to wait is: " << days << endl;
}
int daycount(int days = 0) {
  int n; // test cases
  cout << "Enter test cases: ";
  cin >> n;

  int count;
  cout << "Enter " << n << " variables: ";
  cin >> count; // day numbers mixed

  // start from zero
  for (int i = 1; i < n; i++) {
    int a;
    cin >> a;
    if (a < count) {
      days = i;
      count = a;
    }
  }
  return days;
}