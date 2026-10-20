#include <iostream>
#include <cstring>

using namespace std;

int main()
{
  const size_t name_buff_size = 64;
  char name[name_buff_size];
  name[0] = '\0';

  const char *first_name = "Akshay";
  const char *last_name = "Deogaonkar";

  cout << first_name << endl;
  cout << last_name << endl;

  // String length
  cout << strlen(first_name) << endl;
  cout << strlen(last_name) << endl;

  // String comparison
  cout << strcmp(first_name, last_name) << endl;

  size_t availabe_slots = 0;
  size_t chars_to_copy = 0;

#if 0
  /*
  char *strcpy(char*, const char*):
  * It's an unsafe variant of string copy functions.
  * It can cause buffer overflow if source string length >= available slots in destination buffer.
  * It returns a pointer representing the same destination char array.
  */
   strcpy(name, first_name);
#endif

  /*
  char *strncpy(char*, const char*, size_t):
  * It's a safe variant of string copy functions.
  * It minimizes potential buffer overflow by limiting the number of characters to be copied.
  * It returns a pointer representing the same destination char array.
 */
  availabe_slots = name_buff_size;
  chars_to_copy = strlen(first_name) < availabe_slots ? strlen(first_name) + 1 : availabe_slots;
  strncpy(name, first_name, chars_to_copy);
  if (strlen(first_name) >= availabe_slots)
    name[name_buff_size - 1] = '\0';

#if 0
  /*
  char *strcat(char*, const char*):
  * It's an unsafe variant of string concatenation functions.
  * It can cause buffer overflow if source string length >= available slots in destination buffer.
  * It returns a pointer representing the same destination char array.
  */
  strcat(name, " ");
  strcat(name, last_name);
#endif

  /*
  char *strncat(char*, const char*, size_t):
  * It's a safe variant of string concatenation functions.
  * It minimizes potential buffer overflow by limiting the number of characters to be concantenated.
  * It returns a pointer representing the same destination char array.
 */
  availabe_slots = name_buff_size - strlen(name);
  chars_to_copy = strlen(" ") < availabe_slots ? strlen(" ") + 1 : availabe_slots;
  strncat(name, " ", chars_to_copy);
  if (strlen(" ") >= availabe_slots)
    name[name_buff_size - 1] = '\0';

  availabe_slots = name_buff_size - strlen(name);
  chars_to_copy = strlen(last_name) < availabe_slots ? strlen(last_name) + 1 : availabe_slots;
  strncat(name, last_name, chars_to_copy);
  if (strlen(last_name) >= availabe_slots)
    name[name_buff_size - 1] = '\0';

  cout << name << endl;
  cout << strlen(name) << endl;

  char *target = nullptr;
  char ch_to_find = 'k';

  // Find the first occurence of a character
  target = strchr(name, ch_to_find);
  if (target != nullptr)
    cout << "The character '" << ch_to_find << "' first found at index " << target - name << endl;
  else
    cout << "The character '" << ch_to_find << "' not found" << endl;

  // Find the last occurence of a character
  target = strrchr(name, ch_to_find);
  if (target != nullptr)
    cout << "The character '" << ch_to_find << "' last found at index " << target - name << endl;
  else
    cout << "The character '" << ch_to_find << "' not found" << endl;

  // Find the first occurence of a substring
  const char *substr = "Deo";
  target = strstr(name, substr);
  if (target != nullptr)
    cout << "The substring '" << substr << "' found at index " << target - name << endl;
  else
    cout << "The substring '" << substr << "' not found" << endl;

  // Tokenize a string
  char name_0[name_buff_size];
  strncpy(name_0, name, strlen(name) + 1);
  char *token = strtok(name_0, " ");
  while (token != nullptr)
  {
    cout << token << endl;
    token = strtok(nullptr, " ");
  }

  return 0;
}
