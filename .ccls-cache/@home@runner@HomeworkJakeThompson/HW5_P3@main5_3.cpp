// Programmer: Jake Thompson
// Description: HW5_P3 Bronson Exercises 5.6 problem 6
// Date: 09/25/2022

#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  int Temp;      // initialize int variable for Measured Temp
  int WindSpeed; // Initialize int variable for wind speed

  // const double for conversion factors
  const double K1 = 13.12;
  const double K2 = 11.37;
  const double K3 = 0.3965;

  // for loop Temp
  for (int Temp = 2; Temp <= 10; Temp += 4) {
    // for loop Wind speed
    for (int WindSpeed = 5; WindSpeed <= 11; WindSpeed += 2) {
      // calculate wind chill
      double WCI = K1 + (0.06125 * Temp) - (K2 * pow(WindSpeed, 0.16)) + (K3 * Temp * pow(WindSpeed, 0.16));
      // display measured temp, wind speed, wind chill
      cout << "Measured Temperature = " << Temp << " C" << endl;
      cout << "Wind Speed = " << WindSpeed << " km/hr" << endl;
      cout << "Wind Chill Ind. = " << WCI << endl;
    }
  }
  return 0;
}