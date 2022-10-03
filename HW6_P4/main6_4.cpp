// Programmer: Jake Thompson
// Description: Kattis Astrological Sign
// https://open.kattis.com/problems/astrologicalsign
// Date: 09/29/2022

#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
  
}
void zodiac_sign(int day, string month)
{
    string astro_sign="";
     
    // checks month and date within the
    // valid range of a specified zodiac
    cin >> day;
    cin >> month;
    if (month == "Dec"){
         
        if (day < 22)
        astro_sign = "Sagittarius";
        else
        astro_sign ="Capricorn";
    }