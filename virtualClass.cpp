#include<iostream>
using namespace std;

class A
{
public:
 void fun()
 {
    cout<<"This is A:"<<endl;
 }
};

class B: public A
{
public:
 void fun1()
 {
    cout<<"This is B:"<<endl;
 }
};

class C: public virtual A
{
public:
 void fun2()
 {
    cout<<"This is C:"<<endl;
 }
};

class D: public B, public C
{
public:
 void fun3()
 {
    cout<<"This is D:"<<endl;
 }
};

int main()
{

D d;
d.fun1();
d.fun2();
d.fun3();
d.fun();

return 1;
}

