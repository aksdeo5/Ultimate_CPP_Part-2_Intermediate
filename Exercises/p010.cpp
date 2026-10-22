/*
  Write a function that behaves as follows:

  Accepts a message and prompts the user to input a number, displaying the message.
  If the user inputs an invalid number, keep asking for a valid number until they do.
*/

#include <iostream>
#include <limits>

using namespace std;

int prompt_number(const string &prompt);

int main()
{
  int first = prompt_number("First number: ");
  int second = prompt_number("Second number: ");

  cout << "You enetered " << first << " and " << second << endl;

  return 0;
}

int prompt_number(const string &prompt)
{
  int number;
  while (true)
  {
    cout << prompt;
    cin >> number;
    if (cin.fail())
    {
      cout << "Please enter a valid number." << endl
           << endl;
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      continue;
    }
    break;
  }

  return number;
}
