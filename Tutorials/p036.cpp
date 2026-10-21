#include <iostream>

using namespace std;

struct Movie
{
  string title;

  // Default value
  unsigned short release_year = 0;
};

int main()
{
  // Initializing a structure
  Movie movie = {"Mission Impossible", 1996};

  cout << "Tilte: " << movie.title << endl;
  cout << "Release Year: " << movie.release_year << endl;

  return 0;
}
