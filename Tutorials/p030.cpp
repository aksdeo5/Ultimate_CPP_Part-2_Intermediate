#include <iostream>

using namespace std;

int main()
{
  /*** Extracting Substrings ***/

  string name = "Dennis Ritchie";
  string last_name = name.substr(name.find(" ") + 1);
  cout << last_name << endl;

  return 0;
}
