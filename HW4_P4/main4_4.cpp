//Programmer: Jake Thompson
//Description: HW4_P4 Kattis Jumbo Javelin
//https://open.kattis.com/problems/jumbojavelin
//Date: 09/16/2022

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
  //declare integer N, the number of steel rods she has.
  int N;
  //declare an integer l, the length of one rod
  int l;
  //declare l_total, total length
  int l_total;
  l_total = 0;
  //loop to run test cases
  for (int i = 0; i < N; i++)
    {
      cin >> l_total;
      l_total += l;
    }
  //calculate total length including the 1cm part
  cout << l_total - N + 1 << endl;
  return 0;
}