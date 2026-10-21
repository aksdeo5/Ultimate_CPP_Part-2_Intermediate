/*
  Create a structure for representing an address.

  - Street
  - City
  - Zip Code

  Nest the Address structure within the Customer.

  Create and initialize a Cutomer object.
*/

#include <iostream>
#include <iomanip>

using namespace std;

struct Address
{
  string street;
  string city;
  string zip_code;
};

struct Customer
{
  size_t id;
  string name;
  string email;
  Address address;
};

int main()
{
  Customer customer{
      005,
      "Akshay",
      "aksdeo5@email.com",
      {"7986 Sunset Blvd", "Los Angeles", "90043"}};

  cout << "ID: " << std::setw(3) << std::setfill('0') << customer.id << endl;
  cout << "Name: " << customer.name << endl;
  cout << "Email: " << customer.email << endl;
  cout << "Address: "
       << customer.address.street << ", "
       << customer.address.city << ", "
       << customer.address.zip_code << endl;

  return 0;
}
