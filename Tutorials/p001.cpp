#include <iostream>

using namespace std;

int main()
{
  // Declares an array of 5 integers
  // Allocates adjacent memory blocks for 5 integers
  // Allocated memory blocks hold garbage values
  int numbers_a[5];
  for (int number : numbers_a)
    cout << number << "\t";
  cout << endl;

  // Declares and initializes an array of 5 integers
  // Allocates adjacent memory blocks for 5 integers
  // Each memory block is intialized to the corrosponding value in curly braces
  // Remaining blocks are intialized to 0
  int numbers_b[5] = {1, 2};
  for (int number : numbers_b)
    cout << number << "\t";
  cout << endl;

  // Declares and initializes an array of 5 integers
  // The length of the array is determined by the number of values provided in curely braces
  int numbers_c[] = {1, 2, 3, 4, 5};
  for (int number : numbers_c)
    cout << number << "\t";
  cout << endl;

  return 0;
}