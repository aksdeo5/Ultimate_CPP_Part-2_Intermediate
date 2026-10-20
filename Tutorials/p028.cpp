#include <iostream>

using namespace std;

int main()
{
  /*** Methods for Modifying Strings ***/

  string name = "Dennis";
  cout << name << endl;

  name.append("Ritchie");
  cout << name << endl;

  name.insert(6, " ");
  cout << name << endl;

  name.erase(2, 1);
  cout << name << endl;
  name.insert(2, "n");
  cout << name << endl;

  name.clear();
  cout << boolalpha << (name == "") << endl;

  name = "DENNis Ritchie";
  cout << name << endl;
  name.replace(1, 3, "enn");
  cout << name << endl;

  return 0;
}
