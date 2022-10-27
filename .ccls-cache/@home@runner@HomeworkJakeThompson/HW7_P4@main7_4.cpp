// Programmer: Jake Thompson
// Description: Kattis License to Launch
// https://open.kattis.com/problems/licensetolaunch
// Date: 10/11/2022
// collab with John Thompson

#include <cmath>
#include <iostream>
using namespace std;

int daycount();
int main() {
  int days;
  days = daycount();
  cout << days;
  return 0;
}
int daycount() {
  int n;
  cin >> n;

  int count;
  cin >> count;

  int days = 0;

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