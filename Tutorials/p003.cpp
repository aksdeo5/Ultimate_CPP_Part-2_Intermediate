#include <iostream>

using namespace std;

int main()
{
  int numbers_a[] = {2, 3, 5, 7, 11};
  int count = size(numbers_a);

  int numbers_b[count];
  for (int i = 0; i < count; i++)
    numbers_b[i] = numbers_a[i];

  for (int number : numbers_b)
    cout << number << "\t";
  cout << endl;

  return 0;
}