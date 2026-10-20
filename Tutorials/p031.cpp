#include <iostream>

using namespace std;

int main()
{
  /*** Working with Characters ***/

  string name = "Dennis Ritchie";
  cout << boolalpha << static_cast<bool>(islower(name[0])) << endl;
  cout << boolalpha << static_cast<bool>(isupper(name[0])) << endl;
  cout << boolalpha << static_cast<bool>(isalpha(name[0])) << endl;
  cout << boolalpha << static_cast<bool>(isalnum(name[0])) << endl;
  cout << boolalpha << static_cast<bool>(isdigit(name[0])) << endl;
  cout << boolalpha << static_cast<bool>(isspace(name[0])) << endl;

  cout << endl;

  cout << (char)toupper('a') << endl;

  return 0;
}
