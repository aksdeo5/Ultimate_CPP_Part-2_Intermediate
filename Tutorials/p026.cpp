#include <iostream>

using namespace std;

int main()
{
  /**
   * C++ string type
   *
   * A wrapper around C-style strings—i.e, raw character arrays
   * No need to work with raw character arrays
   * No need to think about the size of character buffer
   * No waste of memory by allocating space more than necessary
   * No need to worry about buffer overflow
   * Takes care of everything although internally it uses raw character arrays
   */
  string name = "dennis";
  cout << name << endl;

  // C++ strings are mutable
  name[0] = 'D';
  cout << name << endl;

  // The length method
  cout << name.length() << endl;

  // The string concatenation
  // Doesn't modify destination string
  // Returns a new string object just like producing a new value by addition of primary types
  string full_name = name + " Ritchie";
  cout << full_name << endl;

  // Copying a string
  // Copied by simply reassgning the string object to another just like primary data types
  name = full_name;
  cout << name << endl;

  // String comparison
  // Compared by simply relational operators just like primary data types
  string another = "Bjarne Stroustrup";
  if (name == another)
    cout << "Same" << endl;
  else if (name < another)
    cout << "The name '" << name << "' alphabetically appears first." << endl;
  else
    cout << "The name '" << another << "' alphabetically appears first." << endl;

  /*** Some string utilty methods ***/

  // Checks if the string starts with a specific character
  cout << boolalpha << name.starts_with('D') << endl;
  cout << boolalpha << name.starts_with('B') << endl;

  // Checks if the string ends with a specific character
  cout << boolalpha << name.ends_with('e') << endl;
  cout << boolalpha << name.ends_with('p') << endl;

  // Checks if the string starts with a specific substring
  cout << boolalpha << name.starts_with("Den") << endl;
  cout << boolalpha << name.starts_with("Bja") << endl;

  // Checks if the string ends with a specific substring
  cout << boolalpha << name.ends_with("Ritchie") << endl;
  cout << boolalpha << name.ends_with("Stroustrup") << endl;

  // Checks if the string is empty
  string str = "";
  cout << boolalpha << name.empty() << endl;
  cout << boolalpha << str.empty() << endl;

  // Returns a read/write reference to the first element of the string.
  cout << name.front() << endl;

  // Returns a read/write reference to the last element of the string.
  cout << name.back() << endl;

  return 0;
}
