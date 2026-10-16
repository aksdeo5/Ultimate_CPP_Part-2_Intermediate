#include <iostream>

using namespace std;

int main()
{
  int matrix[2][2][3] = {02, 03, 05,
                         07, 11, 13,

                         17, 19, 23,
                         29, 31, 37};

  for (size_t i = 0; i < size(matrix); i++)
  {
    for (size_t j = 0; j < size(matrix[i]); j++)
    {
      for (size_t k = 0; k < size(matrix[i][j]); k++)
        cout << matrix[i][j][k] << "\t";
      cout << endl;
    }
    cout << endl;
  }

  return 0;
}