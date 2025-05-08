#include <iostream>
using namespace std;

constexpr float divide(int a, int b)
{
    float x;
    x=a/b;
    return x;
}
int main(){
    constexpr int a =1;
	
    cout<<divide(5,a);
	
	return 0;
}
