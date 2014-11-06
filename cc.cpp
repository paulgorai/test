#include<iostream>

using namespace std;

class CC
{
public:
    char *c;
    int a;
    CC(){ cout<< "Constructor invoked"<<endl;}
    /*CC(CC &rhs)
    {
         cout<<"Copy Constructor Invoked"<<endl;
         //c = rhs.c;
         //a = rhs.a;
    }*/ 
    CC& operator=(CC &rhs)
    {
         cout<<"Assignment operator invoked";
    }
};

int main()
{
    CC *cobj = new CC();
    cobj->c = "Hello";
    cout<<"Object out: "<< &(cobj->c) <<endl; 
    CC cobj2 = *cobj;
    CC *cobj1 = new CC(*cobj);
    cout<<"Object New out: "<< &(cobj1->c) <<endl ;
    cobj1->c = "Good Bye";
    cout<<"AFTER: "<<endl;
    cout<<"Object out: "<< &(cobj->c) <<endl;       
    cout<<"Object New out: "<< &(cobj1->c) <<endl ;

    char *t = "PAUL";
    cout<<"*t: "<<*t<<endl;
    cout<<" t: "<<t<<endl;
    cout<<"t[0]: "<<t[0]<<endl;
    cout<<"&t: "<< &t <<endl;
    cout<<"v t: "<< (void*) t<<endl; 
    return 1;

}
