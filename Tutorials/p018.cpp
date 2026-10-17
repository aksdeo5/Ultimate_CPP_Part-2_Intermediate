/*
  C++ Array vs Pointer behaviour
*/

#include <iostream>

using namespace std;

void print_numbers(int numbers[], size_t size)
{
  size_t i = 0;
  cout << "[";
  for (i = 0; i < size - 1; i++)
    cout << numbers[i] << ", ";
  cout << numbers[i] << "]" << endl;
}

int main()
{
  /*
    In C++, the expression 'array_name' behaves as a pointer when it undergoes array-to-pointer
    decay (converting to a memory address pointing to the first element).
  */
  int numbers[] = {2, 3, 5, 7, 11};

  /*** When it behaves as a Pointer ***/

  /*
    Function arguments:

    If you pass numbers to a function expecting a pointer (void func(int* arr))
    or a traditional array syntax (void func(int arr[]) — which the compiler treats exactly as a pointer),
    it loses its size information.
  */
  print_numbers(numbers, size(numbers));

  /*
    Pointer arithmetic:

    Expressions like numbers + 3 or *numbers explicitly use pointer arithmetic.
    */
  cout << numbers + 3 << endl;
  cout << *numbers << endl;

  /*
    Array indexing:

  An expression like numbers[0] (A traditional array indexing syntax with square-brackets notation)
  is implicitly treated as expression *(numbers + 0) and so behaves as a pointer.
  */
  cout << numbers[0] << endl;

  /*
    Assignment to a pointer:

    If you write int* ptr = numbers;, it decays into the address of the first element.
  */
  int *ptr = numbers;
  cout << ptr << endl;
  cout << *ptr << endl;

  /*
    Operand to the stream insertion operator:

    In the statement cout << numbers;, the expression numbers behaves as a pointer.
  */
  cout << numbers << endl;

  return 0;
}