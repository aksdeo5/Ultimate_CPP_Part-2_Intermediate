#include <iostream>

using namespace std;

int main()
{
  /*** String Numeric Conversion Functions ***/

  double price = stod("19.99");
  cout << price << endl;

  string str = to_string(price);
  cout << str << endl;

  return 0;
}
