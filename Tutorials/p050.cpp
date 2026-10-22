#include <iostream>
#include <fstream>

using namespace std;

struct Movie
{
  size_t id;
  string title;
  unsigned short year;
};

int main()
{
  ifstream ifs;
  ifs.open("data.csv");
  if (ifs.is_open())
  {
    string str;
    getline(ifs, str);

    while (!ifs.eof())
    {
      Movie movie;

      getline(ifs, str, ',');
      if (str.empty())
        continue;
      movie.id = stoull(str);

      getline(ifs, str, ',');
      movie.title = str;

      getline(ifs, str);
      movie.year = static_cast<unsigned short>(stoul(str));

      cout << movie.id << ", " << movie.title << ", " << movie.year << endl;
    }

    ifs.close();
  }

  return 0;
}
