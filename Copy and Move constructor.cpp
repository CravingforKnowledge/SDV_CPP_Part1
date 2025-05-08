#include <iostream>
class A
{
  int i, j;

public:
  //default
  A() : i(0), j(0) {}
  //parameterised
  A(int pi, int pj) : i(pi), j(pj) {}
  //copy constructor
  A(const A &o)
  {
    this->i = o.i;
    this->j = o.j;
    // return *this;
  }

  //move constructor
  A(A &&o)
  {
    this->i = o.i;
    this->j = o.j;
    o.i = 0;
    o.j = 0;
  }
  //service function 
  void display() { std::cout << i << ", " << j << std::endl; }
};

int main()
{
  A a0; //default constructor
  A a1(1, 2);//paarameterised
  A a2 = a1;//copy constructor
  a1.display();
  a2.display();
  A a3 = std::move(a1); //move constructor
  a1.display();
  a3.display();

  return 0;
}
