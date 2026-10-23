#include <iostream>
#include <sstream>
#include <iomanip>

using namespace std;

int main()
{
  const double pi = 3.14;

  // Output string stream
  // Converts different data-type values to strings
  ostringstream oss;

  // Inserts the string representation of the specific type of data stored in the memory location into the stream
  oss << fixed << setprecision(2) << pi;

  // Reads the string from the stream
  string str = oss.str();
  cout << str << endl;

  return 0;
}
