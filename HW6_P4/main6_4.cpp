// Programmer: Jake Thompson
// Description: Kattis Astrological Sign
// https://open.kattis.com/problems/astrologicalsign
// Date: 09/29/2022

#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

void zodiac_sign(int day, string month);
int main() {
  int day;
  string month;
  zodiac_sign(day, month);
  return 0;
}
void zodiac_sign(int day, string month) {
  string astro_sign = "";

  // checks month and date within the
  // valid range of a specified zodiac
  cin >> day;
  cin >> month;
  if (month == "Dec") {

    if (day < 22)
      astro_sign = "Sagittarius";
    else
      astro_sign = "Capricorn";
  }

  else if (month == "Jan") {
    if (day < 20)
      astro_sign = "Capricorn";
    else
      astro_sign = "Aquarius";
  }

  else if (month == "Feb") {
    if (day < 19)
      astro_sign = "Aquarius";
    else
      astro_sign = "Pisces";
  }

  else if (month == "Mar") {
    if (day < 21)
      astro_sign = "Pisces";
    else
      astro_sign = "Aries";
  } else if (month == "Apr") {
    if (day < 20)
      astro_sign = "Aries";
    else
      astro_sign = "Taurus";
  }

  else if (month == "May") {
    if (day < 21)
      astro_sign = "Taurus";
    else
      astro_sign = "Gemini";
  }

  else if (month == "Jun") {
    if (day < 21)
      astro_sign = "Gemini";
    else
      astro_sign = "Cancer";
  }

  else if (month == "Jul") {
    if (day < 23)
      astro_sign = "Cancer";
    else
      astro_sign = "Leo";
  }

  else if (month == "Aug") {
    if (day < 23)
      astro_sign = "Leo";
    else
      astro_sign = "Virgo";
  }

  else if (month == "Sept") {
    if (day < 23)
      astro_sign = "Virgo";
    else
      astro_sign = "Libra";
  }

  else if (month == "Oct") {
    if (day < 23)
      astro_sign = "Libra";
    else
      astro_sign = "Scorpio";
  }

  else if (month == "Nov") {
    if (day < 22)
      astro_sign = "Scorpio";
    else
      astro_sign = "Sagittarius";
  }

  cout << astro_sign;
}