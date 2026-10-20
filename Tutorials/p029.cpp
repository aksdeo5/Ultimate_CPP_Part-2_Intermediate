#include <iostream>

using namespace std;

int main()
{
  /*** Searching Strings ***/

  string name = "Dennis Ritchie";
  cout << name.find('e') << endl;
  cout << name.find('e') << endl;
  cout << name.find('e', 7) << endl;

  if (name.find('E') != static_cast<size_t>(-1))
    cout << name.find('E') << endl;
  else
    cout << "The character 'E' not found" << endl;

  cout << name.find("Rit") << endl;

  cout << name.rfind('i') << endl;

  if (name.find_first_of(",.;") == static_cast<size_t>(-1))
    cout << "The name '" << name << "' is clean." << endl;
  else
    cout << "The name '" << name << "' is polluted." << endl;

  if (name.find_last_of(",.;") == static_cast<size_t>(-1))
    cout << "The name '" << name << "' is clean." << endl;
  else
    cout << "The name '" << name << "' is polluted." << endl;

  cout << name.find_first_not_of(",.;") << endl;
  cout << name.find_last_not_of(",.;") << endl;

  return 0;
}
