//Programmer: Jake Thompson
//Description: Kattis Spavanac
//https://open.kattis.com/problems/spavanac
//Date: 09/09/2022

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
  int H, M;
  cin >> H, M;
  cout << endl;
  M += 15;
  if(M/60 == 0){
    H -= 1;
  }
  else{
    M = M % 60;
  }
  if(H < 0){
    H += 24;
  }
  cout << H <<' '<< H;
  return 0
}