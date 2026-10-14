#include <iostream>

using namespace std;

int main()
{
  // Old approach to calulate size of an array
  int numbers_a[] = {1, 2, 3, 4, 5};
  int size_a = sizeof(numbers_a) / sizeof(numbers_a[0]);
  for (int i = 0; i < size_a; i++)
    cout << numbers_a[i] << "\t";
  cout << endl;

  // New approach to get the size of an array
  int numbers_b[] = {1, 2, 3, 4, 5};
  int size_b = size(numbers_b);
  for (int i = 0; i < size_b; i++)
    cout << numbers_a[i] << "\t";
  cout << endl;

  return 0;
}