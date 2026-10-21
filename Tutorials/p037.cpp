#include <iostream>

using namespace std;

struct Movie
{
  string title;
  unsigned short release_year = 0;
  bool is_popular;
};

int main()
{
  Movie movie = {"Mission Impossible", 1996, true};

  // Unpacking a structure
  auto [title, release_year, is_popular]{movie};

  cout << "Title: " << title << endl;
  cout << "Release Year: " << release_year << endl;
  cout << "Popular: " << boolalpha << is_popular << endl;

  return 0;
}
