#include<iostream>

using namespace std;

class A
{
public:
    static int a;
    int b;
    void fun()
    {
       cout<<"Fun: " << a << endl;
    }
};
int A::a = 10;
int main()
{
cout <<"Size Class: "<< sizeof(A) << endl;
A x;
x.fun();
cout<<"Size of data member a:"<<sizeof(A::a)<<endl;
cout <<"Size of obj a:"<< sizeof(x) << endl;
cout <<"Size of Class:"<< sizeof(A) << endl;

static int i =0;
cout<<"Static Variable: " <<sizeof(i);
}
