#include<iostream>

using namespace std;

int main()
{
int *p = NULL;
delete p;
delete p;

cout<<"Delete P"<<endl;

int *i = 0;
delete i;
delete i;

cout<<"Delete I"<<endl;

int *j = new int(10);

cout<<"J: " <<*j << ": ADDRESS : "<< j <<endl;
delete j;
cout<<"Delete J"<<endl;
cout<<"J: " <<*j << ": ADDRESS : "<< j <<endl;

delete j;

cout<<"Delete J Again"<<endl;

return 1;
}
