/*
  Define a structure for representing customers.

  - ID (number)
  - Name (string)
  - Email (string)

  Ask the user for these values, store them in a Customer Object, and print the result.
*/

#include <iostream>

using namespace std;

struct Customer
{
  size_t id;
  string name;
  string email;
};

int main()
{
  Customer customer;

  cout << "Enter the customer details..." << endl;
  cout << endl;

  cout << "ID: ";
  cin >> customer.id;

  cout << "Name: ";
  cin >> customer.name;

  cout << "Email: ";
  cin >> customer.email;

  cout << endl
       << endl;

  cout << "ID: " << customer.id << endl;
  cout << "Name: " << customer.name << endl;
  cout << "Email: " << customer.email << endl;

  return 0;
}
