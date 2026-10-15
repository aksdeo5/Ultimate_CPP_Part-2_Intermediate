#include <iostream>

using namespace std;

// When passed to a function, int[] automatically dacays into int*
// The decayed pointer holds address of the first element of the array
void print_numbers(int numbers[], int count)
{
  for (int i = 0; i < count; i++)
    cout << numbers[i] << "\t";

  cout << endl;
}

int main()
{
  int numbers[] = {2, 3, 5, 7, 11};
  print_numbers(numbers, size(numbers));

  return 0;
}