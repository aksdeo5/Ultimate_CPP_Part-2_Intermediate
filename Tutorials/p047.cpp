#include <iostream>
#include <limits>

using namespace std;

int main()
{
  cout << "First: ";
  int first;
  cin >> first;

  // Flushing the stream until last 'Enter' key press
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  cout << "Second: ";
  int second;
  cin >> second;

  cout << endl;

  cout << "You entered " << first << " and " << second << endl;

  return 0;
}
