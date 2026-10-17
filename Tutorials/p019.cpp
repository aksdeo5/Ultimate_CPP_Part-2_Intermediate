#include <iostream>

using namespace std;

int main()
{
  int numbers[] = {2, 3, 5, 7, 11};

  int *ptr = numbers;
  int *ptr_2 = numbers;

  // Increments by sizeof(int) bytes
  ptr++;
  cout << *ptr << endl;

  // Increments by 2 * sizeof(int) bytes
  ptr_2 += 2;
  cout << *ptr << endl;

  // An expressoin like 'ptr + n' returns a pointer to next n-th element
  cout << *(ptr + 4) << endl;
  cout << *(numbers + 4) << endl;

  // Array indexing with square-brakets notation is just syntactical sugar over pointer arimthmetic
  // An expression like 'number[n]' is implicitly treated as *(number + n)
  cout << numbers[2] << endl;
  cout << ptr[2] << endl;

  return 0;
}