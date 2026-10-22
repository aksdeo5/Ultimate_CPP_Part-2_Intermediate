#include <iostream>
#include <limits>

using namespace std;

int main()
{
  int first;
  while (true)
  {
    cout << "First: ";
    cin >> first;
    if (cin.fail())
    {
      cout << "Please enter a valid number!" << endl;

      // Clearing the fail state
      cin.clear();

      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      continue;
    }
    break;
  }

  cout << "Second: ";
  int second;
  cin >> second;

  cout << endl;

  cout << "You entered " << first << " and " << second << endl;

  return 0;
}
