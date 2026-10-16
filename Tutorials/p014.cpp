#include <iostream>

using namespace std;

int main()
{
  const int x = 5;
  int y = 11;

  // Constant pointer to constant integer
  const int *const ptr = &x;
  cout << "*ptr: " << *ptr << endl;

  // As it's a pointer to constant it cannot rewrite value at address
  // *ptr = 19;

  // As it's a constant pointer it cannot be reassigned
  // ptr = &y;

  return 0;
}