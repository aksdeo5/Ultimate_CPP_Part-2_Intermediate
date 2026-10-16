/*
  Implement the swap function for swapping two variables using pointer.

  void swap(int *first, int *second);
  */

#include <iostream>

using namespace std;

void swap(int *first, int *second);

int main()
{
  int first = 5;
  int second = 19;

  swap(&first, &second);

  cout << "first: " << first << endl;
  cout << "second: " << second << endl;

  return 0;
}

void swap(int *first, int *second)
{
  int temp = *first;
  *first = *second;
  *second = temp;
}