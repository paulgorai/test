#include<iostream>

using namespace std;

class name
{
    int str;
    public:
    name(int i): str(i)
    {
         cout<<"Constructor called for name: "<<str<<endl;
    }
    name(const name& rhs)
    { 
        cout<<"CC called for name"<<endl;
        str = rhs.str;
        cout<<"BP1"<<endl;
    }
    void print()
    {
        cout<<"Printing str from name:" <<str<<endl;
        cout<<"BP2"<<endl;
    }
    
    ~name()
    {
         cout<<"Destructor called for name: "<<str<<endl;
         cout<<"BP3"<<endl;

    }
};

class useName
{
    name *n;
    public:
    useName(int i)
    {
       cout<<"constructor called for usename"<<endl;
       n= new name(i);
       cout<<"BP4"<<endl;
    }
 
    useName(const useName& rhs)
    {
        cout<<"CC called for useName"<<endl;
        n =  new name(*rhs.n);
        cout<<"BP5"<<endl;
    }

    void  print()
    {
        cout<<"BP6"<<endl;
        n->print(); 
    } 
    
~useName()
{

    cout<<"BP7"<<endl;
    delete n;
    cout<<"Called destructor for useName"<<endl;
}
    
};

int main()
{
useName* u = new useName(10);

u->print();

useName *p = new useName(*u);
delete p;

u->print();


return 1;

}
