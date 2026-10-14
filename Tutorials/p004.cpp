#include <iostream>

using namespace std;

int main()
{
  int numbers_a[] = {2, 3, 5, 7, 11};
  int numbers_b[] = {2, 3, 5, 7, 11};

  int count_a = size(numbers_a);
  int count_b = size(numbers_b);

  bool are_equal = true;
  if (count_a != count_b)
    are_equal = false;
  else
    for (int i = 0; i < count_a; i++)
      if (numbers_a[i] != numbers_b[i])
        are_equal = false;

  cout << boolalpha << are_equal << endl;

  return 0;
}