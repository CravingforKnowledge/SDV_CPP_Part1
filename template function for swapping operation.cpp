/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/* Write a template function two swap 2 varibales values

********************************************************************************/


#include <iostream>

template <typename T> // blueprint of generic function keywords: template, class, typename
// template <class T> //works fine also with class
void my_swap(T *a, T *b)
{   
    T temp;
    temp = *a;
    *a = *b;
    *b= temp;
    std::cout<<"Swapping done !"<<std::endl;
}

int main()
{
    int x=10, y=20;
    char a = 's', b='n';
    std::cout<<"Before swapping "<<"x="<<x<<", "<<"y="<<y<<std::endl;
    my_swap<int>(&x,&y);
    std::cout<<"After swapping "<<"x="<<x<<", "<<"y="<<y<<std::endl;
    std::cout<<"Before swapping "<<"a="<<a<<", "<<"b="<<b<<std::endl;
    my_swap<char>(&a,&b);
    std::cout<<"After swapping "<<"a="<<a<<", "<<"b="<<b<<std::endl;
    return 0;
}