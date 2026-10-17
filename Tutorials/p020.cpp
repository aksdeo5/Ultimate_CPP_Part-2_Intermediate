#include <iostream>

using namespace std;

int main()
{
  int x = 5;
  int y = 6;

  int *ptr_x = &x;
  int *ptr_y = &y;

  // Comparing pointers for equality
  if (ptr_x == ptr_y)
    cout << "Same!" << endl;
  else if (*ptr_x == *ptr_y)
    cout << "Same!" << endl;
  else
    cout << "Not same!" << endl;

  // Comparing a pointer with nullptr for ineuqality
  if (ptr_x != nullptr)
    cout << *ptr_x << endl;

  return 0;
}
