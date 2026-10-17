#include <iostream>

using namespace std;

int main()
{
  // Stack
  // int numbers[1000];
  int x;

  // Heap (Free Store)
  int *numbers = new int[10];
  int *number = new int;

  delete number;
  delete[] numbers;

  return 0;
}
