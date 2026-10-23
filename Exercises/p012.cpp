/*
  Given the following string, write a function to parse it into a Movie srtucture.

  "Terminator 1,1984"
*/

#include <iostream>
#include <sstream>

using namespace std;

struct Movie
{
  string title;
  unsigned short year;
};

Movie parse_to_movie(const string &str);

int main()
{
  string str = "Mission Impossible 1,1984";
  Movie movie = parse_to_movie(str);

  cout << movie.title << ", " << movie.year << endl;

  return 0;
}

Movie parse_to_movie(const string &str)
{
  Movie movie;
  istringstream iss;
  iss.str(str);
  getline(iss, movie.title, ',');
  iss >> movie.year;

  return movie;
}
