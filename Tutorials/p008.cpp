#include <iostream>

using namespace std;

const int rows = 2;
const int cols = 3;

void print_matrix(int matrix[rows][cols])
{
  for (size_t row = 0; row < rows; row++)
  {
    for (size_t col = 0; col < cols; col++)
      cout << matrix[row][col] << " ";
    cout << endl;
  }
}

int main()
{
  int matrix[rows][cols] = {
      {2, 3, 5},
      {7, 11, 13},
  };

  print_matrix(matrix);

  return 0;
}