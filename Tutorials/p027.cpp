#include <iostream>

using namespace std;

int main()
{
  // A string is represented by a raw charcter array.
  char name_a[] = {'D', 'e', 'n', 'n', 'i', 's', '\0'};
  cout << name_a << endl;

  // A raw character array can also be and mostly is initialized with a string literal.
  /*
    It creates an array of constant characters in static, read-only section of memory,
    and then copies the values from that array into the destination character array on stack.
  */
  // Following statement is a syntactic sugar over internal details described above.
  char name_b[] = "Dennis";
  cout << name_b << endl;

  // An array of constant characters can represent an immutable string.
  const char name_c[] = "Dennis";
  cout << name_c << endl;

  // A character pointer can represent the character array and so the string.
  char *name_d = name_b;
  cout << name_d << endl;

  // A string literal is internally stored as an array of constant characters.
  // So a pointer to constant character can represnt the string literal.
  const char *name_e = "Dennis";

  // A string object is initialized to a string literal.
  string name_f = "Dennis";

  // A string object can be initialized to raw character array.
  string name_g = name_b;

  // A string object can be reassigned to a raw character array.
  name_g = name_c;

  // A string object can be reassigned to a charcter pointer representing a string.
  name_g = name_d;

  // A string object can be reassigned to a constant charcter pointer representing a string.
  name_g = name_e;

  return 0;
}
