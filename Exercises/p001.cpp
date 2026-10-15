/*
  Implement the linear search algorithm.

  Create a function for finding for a value in an integer array.
  If the target value exists, return its index; otherwise return -1.
*/

#include <iostream>

using namespace std;

int find(int value, int array[], size_t size)
{
  for (size_t i = 0; i < size; i++)
    if (array[i] == value)
      return i;

  return -1;
}

int main()
{
  int primes[] = {2, 3, 5, 7, 11};
  int index = find(5, primes, size(primes));
  cout << "Index: " << index << endl;

  return 0;
}