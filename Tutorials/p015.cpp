#include <iostream>

using namespace std;

void increase_price(double *price)
{
  *price *= 2;
}

int main()
{
  double price = 100.0;
  increase_price(&price);
  cout << price << endl;

  return 0;
}