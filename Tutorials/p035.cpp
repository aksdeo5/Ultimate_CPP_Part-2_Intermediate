#include <iostream>

using namespace std;

struct Movie
{
  string title;
  unsigned short release_year;
};

int main()
{
  Movie movie;
  movie.title = "Mission Impossible";
  movie.release_year = 1996;
  cout << "Tilte: " << movie.title << endl;
  cout << "Release Year: " << movie.release_year << endl;

  return 0;
}
