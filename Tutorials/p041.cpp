#include <iostream>

using namespace std;

struct Date
{
  unsigned short year;
  unsigned short month;
  unsigned short day;
};

struct Movie
{
  string title;
  Date release_date;

  bool equals(const Movie &movie)
  {
    return title == movie.title &&
           release_date.year == movie.release_date.year &&
           release_date.month == movie.release_date.month &&
           release_date.day == movie.release_date.day;
  }
};

int main()
{
  Movie movie_01{
      "Mission Impossible",
      {1996, 5, 22}};

  Movie movie_02{
      "Mission Impossible",
      {1996, 5, 22}};

  if (movie_01.equals(movie_02))
    cout << "Equal" << endl;
  else
    cout << "Not equal" << endl;

  return 0;
}
