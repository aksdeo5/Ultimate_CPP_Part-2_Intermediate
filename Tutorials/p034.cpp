#include <iostream>

using namespace std;

int main()
{
  /*** Raw Strings ***/

  string command = R"(cd "C:\Program Files\Chess Engines")";
  cout << command << endl;

  return 0;
}
