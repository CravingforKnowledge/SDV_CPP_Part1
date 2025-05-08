/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

template <typename T, int N> // blueprint of generic function keywords: template, class, typename
// template <class T> //works fine also with class
void display(T p)
{   
    for(int i=0;i<N;i++)
    {
    std::cout<<p<<" ";
    }
    std::cout<<std::endl;
}

int main()
{
    display<char,5>('M');
    display<int,1>(12345);
    return 0;
}