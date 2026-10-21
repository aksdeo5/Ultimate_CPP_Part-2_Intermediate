#include <iostream>
#include <vector>

using namespace std;

struct Movie
{
  string title;
  unsigned short release_year = 0;
  bool is_popular;
};

int main()
{
  vector<Movie> movies;
  movies.push_back({"Mission Impossible 1", 1996, true});
  movies.push_back({"Mission Impossible 2", 2000, true});

  for (const auto &movie : movies)
    cout << movie.title << ", "
         << movie.release_year << ", "
         << (movie.is_popular ? "Popular" : "Average")
         << endl;

  return 0;
}
