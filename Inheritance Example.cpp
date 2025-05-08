#include <iostream>
#include <math.h>
class A
{
public:
  int a;
  A() : a(0) {}
  A(int p_a) : a(p_a) {}
  void display()
  {
    std::cout << "A::a=" << a << std::endl;
  }
};

class B : public A
{
public:
  int b;
  B() : b(0) {}
  B(int p_a) : A(p_a), b(0) {}
  B(int p_a, int p_b) : A(p_a), b(p_b) {}
  void display()
  {
    std::cout << "a=" << a << " b=" << b << std::endl;
  }
};

int main()
{
  B b1, b2(1), b3(10, 20);
  b1.display();
  b2.display();
  b3.display();
  return 0;
}
