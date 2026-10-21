#include <iostream>
#include <iomanip>

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

bool operator==(const Movie &first, const Movie &second)
{
  return first.title == second.title &&
         first.release_date.year == second.release_date.year &&
         first.release_date.month == second.release_date.month &&
         first.release_date.day == second.release_date.day;
}

ostream &operator<<(ostream &cout, const Movie &movie)
{
  return cout << movie.title << ", "
              << movie.release_date.year << "-"
              << setw(2) << setfill('0')
              << movie.release_date.month << "-"
              << setw(2) << setfill('0')
              << movie.release_date.day;
}

int main()
{
  Movie movie_01{
      "Mission Impossible",
      {1996, 5, 22}};

  Movie movie_02{
      "Mission Impossible",
      {1996, 5, 22}};

  cout << movie_01 << endl;
  cout << movie_02 << endl;

  cout << endl;

  if (movie_01 == movie_02)
    cout << "Equal" << endl;
  else
    cout << "Not equal" << endl;

  return 0;
}
