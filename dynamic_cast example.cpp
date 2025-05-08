#include <iostream>
using namespace std;

class Base{
	public:
	Base(int pi=0):i(pi){}
	virtual void display(){cout<<"\nBase::i="<<i;} //if not virtual - error: cannot ‘dynamic_cast’ ‘basePtr’ (of type ‘class Base*’) to type ‘class Derived*’ (source type is not polymorphic)
	private:
	int i;
};
class Derived:public Base{
	public:
	Derived(int pi=0, int pj=0):Base(pi), j(pj){}
	void display(){Base::display(); cout<<"\nDerived::j="<<j;}
	private:
	int j;
};

int main(){
	Base *basePtr=new Base(5);
	Derived *derivedPtr=new Derived(1,2);
	
	cout<<"\nbasePtr->display():"; 
	basePtr->display();
	cout<<"\nderivedPtr->display():";
	derivedPtr->display();
	
	cout<<"\nstatic_cast<Derived *>(basePtr)->display()";
	dynamic_cast<Derived *>(basePtr)->display();
	cout<<"\nstatic_cast<Base *> (derivedPtr)->display()";
	dynamic_cast<Base *>(derivedPtr)->display();
	
	return 0;
}
