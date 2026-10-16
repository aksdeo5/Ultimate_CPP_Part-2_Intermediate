#include <iostream>

using namespace std;

int main()
{
  int x = 5;
  int y = 11;

  // Constant pointer to integer
  int *const ptr = &x;
  cout << "*ptr: " << *ptr << endl;

  // It can rewrite value at address
  *ptr = 19;
  cout << "*ptr: " << *ptr << endl;

  // However, the pointer itself cannot be reassigned
  // ptr = &y;

  return 0;
}