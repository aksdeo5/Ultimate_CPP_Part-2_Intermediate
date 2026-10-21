/*
  Define s structure for representing a point.

  - X
  - Y

  Overload the equality (==) and stream insertion (<<) operators for points.
*/

#include <iostream>
#include <iomanip>

using namespace std;

struct Point
{
  int x = 0;
  int y = 0;
};

ostream &operator<<(ostream &cout, const Point &point)
{
  return cout << "(" << point.x << ", " << point.y << ")";
}

bool operator==(const Point &first, const Point &second)
{
  return first.x == second.x && first.y == second.y;
}

int main()
{
  Point p1 = {5, 19};
  Point p2 = {5, 19};

  cout << p1 << endl;
  cout << p2 << endl;

  cout << endl;

  cout << boolalpha << (p1 == p2) << endl;

  return 0;
}
