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

Movie get_movie()
{
  return {
      "Mission Impossible",
      {1996, 5, 22}};
}

void show_movie(Movie &movie)
{
  cout << movie << endl;
}

int main()
{
  Movie movie = get_movie();
  show_movie(movie);

  return 0;
}
