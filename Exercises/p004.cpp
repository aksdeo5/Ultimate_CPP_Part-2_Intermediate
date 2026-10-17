/*
  Given this array:

  int numbers[] = {10, 20, 30};

  Create a pointer that points to the last element in this array.

  Use a while loop to iterate over this array, and print the numbers in reverse order.
*/

#include <iostream>

using namespace std;

int main()
{
  int numbers[] = {10, 20, 30};

  int *ptr = numbers + (size(numbers) - 1);

  while (ptr != numbers)
    cout << *ptr-- << endl;
  cout << *ptr << endl;

  return 0;
}
