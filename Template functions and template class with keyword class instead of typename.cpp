/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

template <typename T> // blueprint of generic function keywords: template, class, typename
// template <class T> //works fine also with class
void display(T p)
{
    std::cout<<p<<std::endl;
}

int main()
{
    display("Manoj");
    display(5000);
    return 0;
}