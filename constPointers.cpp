#include<iostream>

using namespace std;

int main()
{
int j = 100;
int k = 200;

cout<<"CONST POINTER:"<<endl;
int *const i = &j; 
// i = &k; not possible error: assignment of read-only variable ‘i’

cout<<"Value of i = "<<*i<<endl;

cout<<"AFTER"<<endl;

*i = 600;
cout<<"Value of i = "<<*i<<endl;

cout<<"POINTER TO CONST:"<<endl;
int const * l;
l = &j;
*l = 2000; //error: assignment of read-only location

cout<<"Value of l: "<<*l<<endl;
cout<<"AFTER"<<endl;

l = &k;
cout<<"Value of l: "<<*l<<endl;
}
