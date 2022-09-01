#include <iostream>
using namespace std;
int main()
{
double speed, fe, fr;
fe = 2e10;
fr = 2.0000004e10;
speed = 6.685e8 * (fr - fe) / (fr + fe);
cout << "The speed is " << speed << " miles/hour" << endl;
return 0;
}