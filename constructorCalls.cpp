#include <iostream>

using namespace std;

class superBase
{
    int age;
    public:
    superBase(int i):age(i)
    {
        cout<<"Constructing Super Base: Age: "<<age<<endl;
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
     Base(int i, int j):superBase(i),grade(j)
     {
         cout<<"Constructing Base: Grade: "<<grade<<endl;
     }
     ~Base()
     {
         cout<<"Base destructor called:"<<endl;
     }
};

int main()
{
    Base b(10,20);
   
    return 1;
}
