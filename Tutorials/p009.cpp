#include <iostream>

using namespace std;

void print_matrix_details(int matrix[2][3])
{
  // The parameter 'matrix' is decayed into type 'int (*)[3]' from type 'int [2][3]'
  // sizeof operator returns the size of the pointer variable 'matrix'
  // Any type of pointer variable has size 8 bytes
  cout << "sizeof(matrix): " << sizeof(matrix) << endl;

  // The expressions 'matrix[0]' and 'matrix[1]' are still of type 'int[3]'
  cout << "sizeof(matrix[0]): " << sizeof(matrix[0]) << endl;
  cout << "sizeof(matrix[1]): " << sizeof(matrix[1]) << endl;
  cout << endl;

  // The size function does not work for the argument of type 'int (*)[3]'
  // cout << "size(matrix): " << size(matrix) << endl;

  // The size function works for the argument of type 'int[3]'
  cout << "size(matrix[0]): " << size(matrix[0]) << endl;
  cout << "size(matrix[1]): " << size(matrix[1]) << endl;
  cout << endl;

  // The expression 'matrix' returns the pointer to the first element of the 2D-array
  cout << "matrix: " << matrix << endl;

  // The expression 'matrix[0]' returns the pointer to the first element of the first inner 1D-array
  cout << "matrix[0]: " << matrix[0] << endl;

  // The expression 'matrix[1]' returns the pointer to the first element of the second inner 1D-array
  cout << "matrix[1]: " << matrix[1] << endl;

  cout << endl;
}

int main()
{
  int matrix[2][3] = {
      {2, 3, 5},
      {7, 11, 13},
  };

  print_matrix_details(matrix);

  return 0;
}