#include <iostream>

using namespace std;

int main()
{
  /*** Escape Sequences ***/

  // \\ - Backslash
  string path = "C:\\Program Files";
  cout << path << endl;

  // \" - Double Quote
  string msg = "I say, \"C Programming is the core foundation!\"";
  cout << msg << endl;

  // \' - Single Quote
  char ch = '\'';
  cout << ch << endl;

  // \n - New Line
  string email_body = "Dear Reciever,\n\nYour message goes here.";
  cout << email_body << endl;

  // \t - Tab
  string paragrah = "\tThis is first line of the paragrah.\nThis is second line.";
  cout << paragrah << endl;

  return 0;
}
