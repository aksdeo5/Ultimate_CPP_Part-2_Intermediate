/*
  Write a function that accepts a double value and returns the string representaion.
*/

#include <iostream>
#include <sstream>
#include <iomanip>

using namespace std;

string to_str(double number, unsigned short precision);

int main()
{
  const double pi = 3.14159;

  cout << to_str(pi, 2) << endl;
  cout << to_str(pi, 3) << endl;
  cout << to_str(pi, 4) << endl;

  return 0;
}

string to_str(double number, unsigned short precision)
{
  ostringstream oss;
  oss << fixed << setprecision(precision) << number;

  return oss.str();
}
