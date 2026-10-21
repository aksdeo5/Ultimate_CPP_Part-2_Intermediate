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
};

int main()
{
  Movie movie_01{
      "Mission Impossible",
      {1996, 5, 22}};

  Movie movie_02{
      "Mission Impossible",
      {1996, 5, 22}};

  if (movie_01.title == movie_02.title &&
      movie_01.release_date.year == movie_02.release_date.year &&
      movie_01.release_date.month == movie_02.release_date.month &&
      movie_01.release_date.day == movie_02.release_date.day)
    cout << "Equal" << endl;
  else
    cout << "Not equal" << endl;

  return 0;
}
