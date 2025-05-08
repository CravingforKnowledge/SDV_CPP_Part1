#include <iostream>
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

int main()
{
  point_2d p0;
  point_2d p1(1, 2);
  p0.display();
  p1.display();
  p0.set_x(10);
  p0.display();
  //p0.set_y(20);
  //p0.display();
  return 0;
}
