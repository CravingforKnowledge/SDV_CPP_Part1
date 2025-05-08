/*
create a class model to handle read/write of specific byte(s) in a multi byte integer.
e.g.
given a 4 byte value,
  read write any given byte
  read write any successive bytes
  first byte
  first two bytes
  first 4 bytes
*/

#include <iostream>
#include <stdio.h>
using namespace std;

// class model
class bytes
{
private:
  int value; // 4 bytes size
private:
  char value0[4];
  short value2;
  short value3;

public:
  bytes(int value);
  void display(int pos);        // specific byte only
  void display_first(int size); // first 1, 2 bytes
  void display();               // display all (4 in this case)
};
//--------------------------------------------------
// class implentation (definition of functions)
bytes::bytes(int value)
{
  char str[128] = {0};
  this->value = value;
  this->value2 = value & 0xFFFF;
  this->value3 = value & 0xFFFFFF;
  this->value0[0] = value & 0xFF;
  this->value0[1] = (value >> 8) & 0xFF;
  this->value0[2] = (value >> 16) & 0xFF;
  this->value0[3] = (value >> 24) & 0xFF;

  sprintf(str, "object constructed: %x", this->value);
  std::cout << str << std::endl;
}
void bytes::display(int pos)
{
  char str[128] = {0};
  switch (pos)
  {
  case 0:
    sprintf(str, "%x", value0[0]);
    std::cout << str << std::endl;
    break;
  case 1:
    sprintf(str, "%x", value0[1]);
    std::cout << str << std::endl;
    break;
  case 2:
    sprintf(str, "%x", value0[2]);
    std::cout << str << std::endl;
    break;
  case 3:
  default:
    sprintf(str, "%x", value0[3]);
    std::cout << str << std::endl;
  }
}
void bytes::display_first(int size) // 1, 2, 4
{
  char str[128] = {0};
  switch (size)
  {
  case 1:
    sprintf(str, "%x", value0[0]);
    break;
  case 2:
    sprintf(str, "%x", value2);
    break;
  case 3:
    sprintf(str, "%x", value3);
    break;
  case 4:
  default:
    sprintf(str, "%x", value);
    break;
  }
  std::cout << str << std::endl;
}
void bytes::display()
{
  char str[128] = {0};
  sprintf(str, "%x", value);
  std::cout << str << std::endl;
}
//-------------------------------------------
int main()
{
  bytes b(0xABCDEF12);
  // char str[17] = {0};
  // sprintf(str, "%X", 0x12345678);
  // std::cout << str;
  // return 0;
  //b.display(0);
  //b.display(1);
  //b.display(2);
  b.display(3);
  //b.display_first(1);
  b.display_first(2);
  b.display_first(3);
  b.display_first(4);
  return 0;
}
