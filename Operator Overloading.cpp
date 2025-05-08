#include <iostream>
class A
{
public:
  int i, j;
  A() {}
  A(int p_i, int p_j) : i(p_i), j(p_j) {}
  A operator+(A &o)
  {
    A temp;
    temp.i = this->i + o.i;
    temp.j = this->j + o.j;
    return temp;
  }
  void display() { std::cout << "i=" << i << ", j=" << j << std::endl; }
};

int main()
{
  A a1, a2, a3;
  a1.i = 10;
  a1.j = 20;
  a2.i = 11;
  a2.j = 22;
  a3 = a1 + a2;
  a1.display();
  a2.display();
  a3.display();
  return 0;
}
