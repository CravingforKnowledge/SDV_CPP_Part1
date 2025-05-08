#include <iostream>
using namespace std;

class buffer
{
 
};

int myfun(int a)
{   
    int b = 1;
    static int c = a+b;
    return c;
}

struct mystruct{
  int a;
  int *ptr;
  mystruct():a(0),ptr(&a){}
};

int main()
{
    int a[]={1,0,3};
    int *ptr = a;
    mystruct *myptr = new mystruct;
    std::cout<< *(myptr)->ptr<<std::endl;
    //std::cout<< myptr.ptr;
    std::cout<< (myptr)->ptr<<std::endl;
    std::cout<< (*myptr).ptr<<std::endl;
    std::cout<< &(*myptr).ptr<<std::endl;
   std::cout<< "here = "<<*a <<std::endl;
    std::cout<< "ptr "<<ptr <<std::endl;
    std::cout<< "++ptr "<<++ptr <<std::endl;
    std::cout<< "ptr[0] "<<ptr[0] <<std::endl;
    std::cout<< ptr[1] <<std::endl;
    std::cout<< ptr[2] <<std::endl;
    std::cout<< ptr[3] <<std::endl;
  
}
