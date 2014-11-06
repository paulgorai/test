#include<iostream>

using namespace std;

class staticCheck
{
    static int age;
    int grade;
public:
    staticCheck(int str):grade(str)
    {
    }
    void fun()
    {
        age = 20;
        cout<<"This is a Non Static Method: "<<age<<endl;
        cout<<"This is a Non Static Method: "<<grade<<endl;
    }
    static void fun1()
    {
        age = 10;
        cout<<"This is static method: "<<age<<endl;
        //cout<<"This is static method: "<<grade<<endl;
    }
};

int staticCheck::age = 0;

int main()
{
    staticCheck s(10);
    s.fun();
    staticCheck::fun1();
}
