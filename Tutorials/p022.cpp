#include <iostream>

using namespace std;

int main()
{
  size_t capacity = 5;
  size_t count = 0;
  int *numbers = new int[capacity];

  while (true)
  {
    cout << "Number: ";
    cin >> numbers[count];
    if (cin.fail())
      break;
    count++;
    if (count == capacity)
    {
      int *temp = new int[capacity * 2];
      for (size_t i = 0; i < capacity; i++)
        temp[i] = numbers[i];
      delete[] numbers;
      numbers = temp;
      capacity *= 2;
    }
  }

  for (size_t i = 0; i < count; i++)
    cout << numbers[i] << endl;

  delete[] numbers;

  return 0;
}
