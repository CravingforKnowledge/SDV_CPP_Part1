#include <iostream>
class A
{
private:
  int i;

public:
  A() : i(0) { std::cout << "A::A()\n"; }
  A(int p_i) : i(p_i) { std::cout << "A::A(int)\n"; }
  virtual void display() { std::cout << "A::i=" << i << std::endl; }
  ~A() { std::cout << "A::~A()\n"; }
};

class B : public A
{
private:
  int i;

public:
  B() : A(), i(0) { std::cout << "B::B()\n"; }
  B(int a_i, int b_i) : A(a_i), i(b_i) { std::cout << "B::B(int, int)\n"; }
  void display()
  {
    std::cout << "B::display()\nB::i=" << i << std::endl;
    A::display();
  }
  ~B() { std::cout << "B::~B()\n"; }
};
int main()
{
  A a1(10);
  B b1(20, 30);
  A *base_ptr = nullptr;
  a1.display();
  std::cout << "----------\n";
  b1.display();
  std::cout << "----------\n";

  base_ptr = &a1;
  base_ptr->display();
  std::cout << "----------\n";
  base_ptr = &b1;
  base_ptr->display();
  std::cout << "----------\n";
  b1.A::display();
  std::cout << "----------\n";
}
