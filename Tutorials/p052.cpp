#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  ifstream ifs("data.bin", iostream::binary);
  if (ifs.is_open())
  {
    int number;
    while (ifs.read(reinterpret_cast<char *>(&number), sizeof number))
      cout << number << endl;
    ifs.close();
  }

  return 0;
}
