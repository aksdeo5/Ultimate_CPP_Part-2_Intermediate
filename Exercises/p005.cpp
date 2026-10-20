/*
  Given name of a person, extract the first-name and last-name out of it.
*/

#include <iostream>

using namespace std;

int main()
{
  string name = "Dennis Ritchie";

  string first_name = name.substr(0, name.find(' '));
  cout << first_name << endl;

  string last_name = name.substr(name.find(' ') + 1);
  cout << last_name << endl;

  return 0;
}
