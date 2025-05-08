#include <iostream>


class buffer
{
 
};

int myfun(int a)
{   
    int b = 1;
    static int c = a+b;
    return c;
}

int main()
{
  buffer buf1;
  
  char C = 'A';
  int v;
  const int cv=9;
  int *ptr= &v;
  //int *cptr = &cv; //error: invalid conversion from ‘const int*’ to ‘int*’
  int * const cptr1 = &v;
  const int * const cptr2 = &cv; 
  //char *ptr = new char('B');

 // std::cout<<(sizeof(C))<<std::endl;
  //std::cout<<(sizeof(buf1))<<std::endl;
  std::cout<<"(sizeof(v)) "<<(sizeof(v))<<std::endl;
  std::cout<<"(sizeof(cv)) "<<(sizeof(cv))<<std::endl;
  std::cout<<"(sizeof(ptr)) "<<(sizeof(ptr))<<std::endl;
//  std::cout<<"(sizeof(cptr)) "<<(sizeof(cptr))<<std::endl;
  std::cout<<"(sizeof(cptr1)) "<<(sizeof(cptr1))<<std::endl;
  std::cout<<"(sizeof(cptr2)) "<<(sizeof(cptr2))<<std::endl;
  
  std::cout<<"(address of(cptr1)) "<<(&cptr1)<<std::endl;
  std::cout<<"(address of(cptr2)) "<<(&cptr2)<<std::endl;
 
 std::cout<<"a+b= "<<myfun(3)<<std::endl;
 std::cout<<"a+b= "<<myfun(5)<<std::endl;
 
 
}
