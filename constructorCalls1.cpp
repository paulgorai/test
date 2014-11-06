#include <iostream>

using namespace std;

class superBase
{
    int age;
    public:
    superBase()
    {
        cout<<"Constructing Super Base: Age: "<<age<<endl;
    }
    void print()
    {
        cout<<"This is superBase"<<endl;
    }
    ~superBase()
    {
        cout<<"superBase Destructor called:"<<endl;
    }
};

class Base : public superBase
{
     int grade;
     public:
     Base(int i, int j):grade(j)
     {
         cout<<"Constructing Base: Grade: "<<grade<<endl;
     }
    void print()
    {
        cout<<"This is Base"<<endl;
    }
    ~Base()
     {
         cout<<"Base destructor called:"<<endl;
     }
};

int main()
{
    Base b(10,20);
    superBase sB;
    b.print(); 
    b.superBase::print();
    return 1;
}
