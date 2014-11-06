#include<iostream>

using  namespace std;

struct virtualStructBase
{
virtual void fun()
{
    cout<<"In base class fun"<<endl;
}

};

struct virtualStructDerived : virtualStructBase
{
virtual void fun()
{
    cout<<"In derived class fun"<<endl;
}

};

int main()
{
virtualStructBase *b;
virtualStructDerived d;
b = &d;
b->fun();
return 1;
}

