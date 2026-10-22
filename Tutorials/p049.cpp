#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  ofstream ofs;
  ofs.open("data.csv");
  if (ofs.is_open())
  {
    ofs << "id," << "title," << "year\n"
        << "1," << "Mission Impossible 1," << "1996\n"
        << "2," << "Mission Impossible 2," << "2000\n";

    ofs.close();
  }

  return 0;
}
