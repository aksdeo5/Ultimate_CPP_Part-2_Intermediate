#include <iostream>
#include <memory>

using namespace std;

int main()
{
  // unique_ptr<int> x(new int);
  // unique_ptr<int[]> y(new int[5]);

  auto x = make_unique<int>();
  auto y = make_unique<int[]>(5);

  cout << x << endl;
  cout << y << endl;

  cout << endl;

  *x = 5;
  cout << *x << endl;

  cout << endl;

  for (size_t i = 1; i <= 5; i++)
    y[i] = i;

  for (size_t i = 1; i <= 5; i++)
    cout << y[i] << endl;

  return 0;
}
