#include <iostream>
// #include <string>
class point_2d
{
private:
  int x, y;
  char name[25];

public:
  point_2d() : x(0), y(0), name("") {}
  point_2d(int p_x, int p_y, char p_name[]) : x(p_x), y(p_y)
  {
    int i = 0;
    for (; p_name[i]; i++)
      name[i] = p_name[i];
    name[i] = '\0';
  }
  virtual void display()
  {
    std::cout << name << "(" << x << "," << y << ")";
  }
  int get_x() { return x; }
  int get_y() { return y; }
  char *get_name() { return name; }
};

class point_3d : public point_2d
{
private:
  int z;

public:
  point_3d() : point_2d(0, 0, (char *)""), z(0) {}
  point_3d(int p_x, int p_y, int p_z, char p_name[]) : point_2d(p_x, p_y, p_name), z(p_z) {}
  void display() override
  {
    std::cout << get_name() << "(" << get_x() << "," << get_y() << "," << z << ")";
  }
};

int main()
{
  point_2d p2(10, 20, (char *)"P2");
  point_3d p3(1, 2, 3, (char *)"P3");

  p2.display();
  p3.display();
  return 0;
}