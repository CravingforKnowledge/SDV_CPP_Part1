#include <iostream>
#include <string.h>
class A
{
public:
  char *ptr;
  A() : ptr(nullptr) { std::cout << "A::A()" << std::endl; }
  A(char *p_ptr)
  {
    if (p_ptr)
    {
      ptr = new char[strlen(p_ptr) + 1]; // note the size of memory allocated.
      strcpy(ptr, p_ptr);
    }
    else
      ptr = nullptr;
  }
  ~A()
  {
    if (ptr)
      delete[] ptr;
    std::cout << "~A::A() " << std::endl;
  }
};
class B : public A
{
public:
  B() { std::cout << "B::B()" << std::endl; }
  ~B() { std::cout << "~B::B() " << std::endl; }
};
int main()
{
  char a[] = "welcome";

  char *ptr = new char('a');
  delete ptr;

  A a1(a);
  B b1;
  return 0;
}
