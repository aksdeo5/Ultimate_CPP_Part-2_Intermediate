#include <iostream>
#include <sstream>

using namespace std;

int main()
{
  string str = "5 6";

  // Input string stream
  // Parses Strings
  istringstream iss;

  // Writes the string to the stream setting a new buffer
  iss.str(str);

  // Extracts the specific data-type value from the stream into the target memory location
  int first;
  iss >> first;

  int second;
  iss >> second;

  cout << first + second << endl;

  return 0;
}
