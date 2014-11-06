#include <iostream>
using namespace std;

class constChecker
{
   int age;
   public:
   constChecker(int i) : age(i)
   {
   }

   int fun(int i)
   {
       cout<<"This is non const function:"<<age<<endl;
   }

   int fun(int i) const
   {
        int x = 0;
        age  = age + 10;
        x = x+10;
        cout<<"This is const function:"<<age<<endl;
   }
};

int main()
{
    constChecker c(10);
    const constChecker c1(20);
    c.fun(1);
    c1.fun(2);
    return 1;
}
