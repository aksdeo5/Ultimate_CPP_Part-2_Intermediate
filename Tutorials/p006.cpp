#include <iostream>
#include <limits>

using namespace std;

int main()
{
  int numbers[] = {2, 3, 5, 7, 11};

  size_t size = sizeof numbers;
  size_t count = std::size(numbers);

  cout << "numbers-size: " << size << endl;
  cout << "numbers-count: " << count << endl;
  cout << endl;

  cout << "size_t-min: " << numeric_limits<size_t>::min() << endl;
  cout << "size_t-max: " << numeric_limits<size_t>::max() << endl;
  cout << endl;

  return 0;
}