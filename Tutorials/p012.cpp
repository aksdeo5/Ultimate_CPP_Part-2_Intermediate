#include <iostream>

using namespace std;

int main()
{
  const int x_a = 5;
  const int x_b = 11;
  int y = 6;

  // Pointer to constant integer
  const int *ptr = &x_a;
  cout << "*ptr: " << *ptr << endl;

  // It cannot rewrite value at address
  // *ptr = 19;

  // However, the pointer itself can be reassigned to address of another constant
  ptr = &x_b;
  cout << "*ptr: " << *ptr << endl;

  // Although it's a pointer to constant, it can also be reassigned to address of a non-constant
  ptr = &y;
  cout << "*ptr: " << *ptr << endl;

  // However, it cannot rewrite value at address even though it points to a non-constant
  // *ptr = 8;

  return 0;
}