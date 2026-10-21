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
  bool is_popular;
};

int main()
{
  Movie movie{
      "Mission Impossible",
      {1996, 5, 22},
      true};

  cout << movie.title << ", "
       << movie.release_date.year << "-" << movie.release_date.month << "-" << movie.release_date.day << ", "
       << (movie.is_popular ? "Popular" : "Average") << endl;

  return 0;
}
