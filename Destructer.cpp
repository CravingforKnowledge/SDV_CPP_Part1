#include <iostream>
class A
{
public:
  A() { std::cout << "A::A()" << std::endl; }
  ~A() { std::cout << "~A::A() " << std::endl; }
};
class B : public A
{
public:
  B() { std::cout << "B::B()" << std::endl; }
  ~B() { std::cout << "~B::B() " << std::endl; }
};
int main()
{
  A a1;
  B b1;
  return 0;
}
