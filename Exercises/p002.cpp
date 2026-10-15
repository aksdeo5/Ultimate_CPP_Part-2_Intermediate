/*
  Implement the bubble sort algorithm.

  Create a function that takes an array of integers and sort it.
*/

#include <iostream>

using namespace std;

void swap(size_t i, size_t j, int numbers[]);
void sort(int numbers[], size_t size);

int main()
{
  int primes[] = {43, 73, 13, 61, 5, 2, 67, 23, 37, 47};
  sort(primes, size(primes));
  for (int prime : primes)
    cout << prime << "\t";
  cout << endl;

  return 0;
}

void sort(int numbers[], size_t size)
{
  for (size_t i = size - 1; i > 0; i--)
  {
    bool is_sorted = true;
    for (size_t j = 0; j < i; j++)
      if (numbers[j] > numbers[j + 1])
      {
        is_sorted = false;
        swap(j, j + 1, numbers);
      }
    if (is_sorted)
      break;
  }
}

void swap(size_t i, size_t j, int numbers[])
{
  int temp = numbers[i];
  numbers[i] = numbers[j];
  numbers[j] = temp;
}
