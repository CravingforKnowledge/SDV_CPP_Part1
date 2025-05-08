#include <iostream>
#include <math.h>

class point_2d
{
private: // it is the default scope if not specified.
  int x, y;

public:
  point_2d();             // default constructor
  point_2d(int x, int y); // parameterised constructor
  void display();
  int get_x();
  int get_y();
  void set_x(int x);
  void set_y(int y);
};

point_2d::point_2d()
{
  x = 0;
  y = 0;
}
point_2d::point_2d(int x, int y)
{
  this->x = x;
  this->y = y;
}

void point_2d::display()
{
  std::cout << "(" << x << "," << y << ")" << std::endl;
}
int point_2d::get_x()
{
  return x;
}
int point_2d::get_y()
{
  return y;
}
void point_2d::set_x(int x)
{
  this->x = x;
}
void point_2d::set_y(int y)
{
  this->y = y;
}

class line_2d
{
private:
  point_2d p1, p2;
  float distance;

public:
  line_2d() : p1(), p2(), distance(0)
  {
  }
  line_2d(point_2d p_p1, point_2d p_p2) : p1(p_p1.get_x(), p_p1.get_y()),
                                          p2(p_p2.get_x(), p_p2.get_y()), distance(std::sqrt((p2.get_x() - p1.get_x()) * (p2.get_x() - p1.get_x()) + (p2.get_y() - p1.get_y()) * (p2.get_y() - p1.get_y())))
  {
  }
  void display()
  {
    p1.display();
    std::cout << "-";
    p2.display();
    std::cout << " distance=" << distance << std::endl;
  }
};

int main()
{
  line_2d l0;
  point_2d p1(10, 20), p2(30, 40);
  line_2d l1(p1, p2);
  l0.display();
  l1.display();
  return 0;
}
