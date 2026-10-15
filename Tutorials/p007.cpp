#include <iostream>

using namespace std;

int main()
{
  int values[] = {2, 3, 5};

  // Structured Binding or Unpacking arrays
  auto [x, y, z] = values;
  cout << x << ", " << y << ", " << z << endl;

  return 0;
}