#include <iostream>

using namespace std;

int main()
{
  int numbers[] = {2, 3, 5, 7, 11};
  cout << numbers << endl;
  cout << *numbers << endl;

  cout << endl;

  int *ptr = numbers;
  cout << ptr << endl;
  cout << *ptr << endl;

  return 0;
}