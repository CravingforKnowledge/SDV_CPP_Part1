 /*
  Inclass Activity 2:
  implement classes A, B, C with one public member each.
  assume int a, int b, int c respectively.
  let B inherit A, C inherit B.
  implement the necessary consructor, display, destructor functions.
  check with out virtual qualifier, how is the relationship.
  chech with virtual qualifier, how the same changes.

  use keyword, override in the derived classes.
  Note:
    oerride is used on virtual functions.
    it is not proper to use it with non virtual functions.
*/

#include <iostream>
using namespace std;

class Device 
{
  public:
    virtual void turnOn()=0;//Pure virtual function..to make class abstract
      /*  {
        std::cout<<"Turn On Device"<<std::endl;
        }*/
};

class TV : public Device
{
    public:
        void turnOn() override
        {
        std::cout<<"Turn On TV"<<std::endl;
        }
        
};

class HDMI: public TV
{
    public:
        void turnOn() override
        {
        std::cout<<"Turn On HDMI source"<<std::endl;
        }
        
};

int main()
{
    Device *d1; //will throw error for abstract class
    d1= new Device(); //will throw error for abstract class
    d1->turnOn(); // will throw error for abstract class
    TV *d1;
    d1= new TV();
    d1->turnOn();
    d1= new HDMI();
    d1->turnOn();
}
