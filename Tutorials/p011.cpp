#include <iostream>

using namespace std;

int main()
{
  int number = 5;

  // Declaring a variable of type pointer to integer (Integer pointer)
  // It's best practice to intialize a pointer to 'nullptr'
  int *ptr = nullptr;

  // Address-of operator '&' is used to invoke address of a variable
  // Setting the pointer variable's value to the address of another variable of corrosponding type
  ptr = &number;

  // Dereference operator '*' is used to access the value at address stored by the pointer
  cout << "*ptr: " << *ptr << endl;

  // By dereferencing a pointer we can also rewrite a new value at address stored by the pointer
  *ptr = 11;
  cout << "*ptr: " << *ptr << endl;

  return 0;
}