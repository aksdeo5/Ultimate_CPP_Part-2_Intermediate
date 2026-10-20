/*
  Given the following format of customer numbers:

  2 alphabetic characters
  4 digits

  Write a function to validate a customer number.

  bool is_valid(string customer_number);
*/

#include <iostream>

using namespace std;

bool is_valid(string customer_number);

int main()
{
  string customer_number_a = "AB1234";
  cout << boolalpha << is_valid(customer_number_a) << endl;

  string customer_number_b = "ab1234";
  cout << boolalpha << is_valid(customer_number_b) << endl;

  string customer_number_c = "Ab1234";
  cout << boolalpha << is_valid(customer_number_c) << endl;

  string customer_number_d = "AB12345";
  cout << boolalpha << is_valid(customer_number_d) << endl;

  string customer_number_e = "A12345";
  cout << boolalpha << is_valid(customer_number_e) << endl;

  string customer_number_f = "1B2345";
  cout << boolalpha << is_valid(customer_number_f) << endl;

  string customer_number_g = "123456";
  cout << boolalpha << is_valid(customer_number_g) << endl;

  string customer_number_h = "AB12C4";
  cout << boolalpha << is_valid(customer_number_h) << endl;

  return 0;
}

bool is_valid(string customer_number)
{
  const size_t valid_length = 6;

  if (customer_number.length() != valid_length)
    return false;

  if (!isalpha(customer_number[0]) || !isalpha(customer_number[1]))
    return false;

  for (size_t i = 2; i < customer_number.length(); i++)
    if (!isdigit(customer_number[i]))
      return false;

  return true;
}