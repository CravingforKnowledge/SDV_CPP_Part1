#include <iostream>

class A
{
private:
  int private_i;

protected:
  int protected_i;

public:
  int public_i;
  A()
  {
    private_i = 1;
    protected_i = 2;
    public_i = 3;
  }
  void display(); // definition is done elsewhere.
};

void A::display()
{
  //private_i = 10;   // error
  //protected_i = 20; // error
  std::cout << private_i << ", " << protected_i << ", " << public_i << std::endl;
}

int main()
{
  A a1;
  a1.display();
  // a1.private_i = 10;   // error
  // a1.protected_i = 20; // error
  a1.public_i = 30; // it is valid.
  a1.display();
}
