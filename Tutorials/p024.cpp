#include <iostream>
#include <memory>

using namespace std;

int main()
{
  // auto x = make_shared<int>();
  shared_ptr<int> x(new int);
  shared_ptr<int>
      y(x);

  *y = 5;

  cout << boolalpha << (x == y) << endl;
  cout << *x << endl;
  cout << *y << endl;

  return 0;
}
