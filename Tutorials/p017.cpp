/*
  C++ Array vs Pointer behaviour
*/

#include <iostream>

using namespace std;

void print_numbers(int (&numbers)[5])
{
  size_t i = 0;
  cout << "[";
  for (i = 0; i < size(numbers) - 1; i++)
    cout << numbers[i] << ", ";
  cout << numbers[i] << "]" << endl;
}

int main()
{
  /*
    In C++, the expression 'array_name' behaves as an actual array when
    it retains its type information (knowing its exact size and structure).
  */
  int numbers[] = {2, 3, 5, 7, 11};

  /*** When it behaves as an Actual Array ***/

  /*
    With the sizeof operator:

    sizeof(numbers) returns the total size of the array in bytes (e.g., 4 bytes * N elements),
    not the size of a pointer.
  */
  cout << "sizeof numbers: " << sizeof numbers << endl;

  /*
    With the address-of operator (&):

    The expression &numbers yields a pointer to the entire array (type int (*)[N]),
    rather than a pointer to a pointer (int**).
  */
  int (*ptr)[5] = &numbers;
  cout << "ptr: " << ptr << endl;
  cout << "ptr + 1: " << ptr + 1 << endl;

  /*
    Binding to an array reference:

    If you pass it to a function that accepts a reference to an array (e.g., void func(int (&arr)[5])),
    it is passed as a reference to the array, so that the function gets direct access to
    the actual array object and so can get its size.
  */
  print_numbers(numbers);

  /*
    C++11 structured binding:

     If you unpack the array using auto [a, b, c] = numbers;, it behaves as an array.
  */
  auto [a, b, c, d, e] = numbers;
  cout << a << ", " << b << ", " << c << ", " << d << ", " << e << endl;

  return 0;
}