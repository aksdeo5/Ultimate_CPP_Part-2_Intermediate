#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  int numbers[] = {1'000'000, 2'000'000, 3'000'000};
  ofstream ofs("data.bin", iostream::binary);
  if (ofs.is_open())
  {
    ofs.write(reinterpret_cast<char *>(numbers), sizeof numbers);

    ofs.close();
  }

  return 0;
}
