#include <iostream>
class Numbers
{
private:
  int *ptr, size;

public:
  Numbers() : ptr(nullptr), size(0) {}
  Numbers(int a[], int p_size) : ptr(new int[p_size]), size(p_size)
  {
    for (int i = 0; i < size; i++)
      ptr[i] = a[i];
  }
  void display()
  {
    for (int i = 0; i < size; i++)
      std::cout << ptr[i] << " ";
  }
  ~Numbers()
  {
    if (size && ptr)
      delete[] ptr;
  }
};

int main()
{
  int a[] = {1, 2, 3, 4, 5, 6, 7}, n = 7;
  Numbers n1(a, n);
  Numbers *ptr = new Numbers(a, 3);
  n1.display();
  ptr->display();
  //it is possible to delete object held in ptr.
  delete ptr; 
  //it is a must to make ptr to forget the address it is holding
  ptr=nullptr;
  //before using a ptr, check if it exists. 
  if(ptr)
    ptr->display();
  //note: n1 is object. it has address.
  //delete &n1; //it is unacceptable. error.
  //static objects can not be deleted this way.
  //only dynamic objects (held in pointer variables), can be deleted.
  //static object is destroyed when the control goes out of scope.
  return 0;
}
