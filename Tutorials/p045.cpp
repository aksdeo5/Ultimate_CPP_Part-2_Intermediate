#include <iostream>

using namespace std;

enum Action
{
  List = 1,
  Add,
  Update
};

int main()
{
  cout << "1: List invoices" << endl
       << "2: Add invoices" << endl
       << "3: Update invoices" << endl
       << endl
       << "Select: ";

  unsigned short input;
  cin >> input;
  cout << endl;

  switch (input)
  {
  case Action::List:
    cout << "List invoices" << endl;
    break;

  case Action::Add:
    cout << "Add invoices" << endl;
    break;

  case Action::Update:
    cout << "Update invoices" << endl;
    break;

  default:
    break;
  }

  return 0;
}
