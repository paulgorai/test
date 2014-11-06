#include <iostream>
using namespace std;

class superBase
{
public:
 void fun1()
{
cout<<"I am superBase::void fun1";
}

void fun2()
{
cout<<"I am superBase::void fun2";
}
};

class Base : public superBase
{
public:
virtual void fun1()
{
cout<<"I am Base::void fun1\n";
}

void fun3()
{
cout<<"I am Base::void fun3\n";
}
};

class Derived : public Base
{
public:
void fun3()
{
cout<<"I am Derived::void fun3\n";
}
};

int main()
{
cout<<"Size of SuperBase:"<<sizeof(superBase)<<endl;
cout<<"Size of Base:"<<sizeof(Base)<<endl;
cout<<"Size of Derived:"<<sizeof(Derived)<<endl;

superBase *sB;
Base *b = new Base;
Derived *d = new Derived;
sB = d;
//sB->fun3();

return 1;
}
