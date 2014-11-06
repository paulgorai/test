#include<iostream>

using namespace std;

class PSingleton
{
public:
static PSingleton* Instance();
void openLog()
{
    cout<<"Opening log file"<<endl;
}
~PSingleton()
{
    cout<<"Destructor called"<<endl;
}

private:
PSingleton(){};
PSingleton(const PSingleton&);
PSingleton& operator=(const PSingleton&);
static PSingleton*  p_Instance;
};

PSingleton* PSingleton::p_Instance = 0;
PSingleton* PSingleton::Instance()
{
    if(!p_Instance)
    {
        cout<<"Instance 1 Created"<<endl; 
    	p_Instance = new PSingleton;
    }
    else
    {
        cout<<"Not Created"<<endl;
    }
    return p_Instance;
}

class ABC: public PSingleton
{
};

int main()
{
PSingleton *p = PSingleton::Instance();
PSingleton *p1 = PSingleton::Instance();
PSingleton *p2 = PSingleton::Instance();
PSingleton::Instance()->openLog();
//PSingleton p4 = *p;
delete p;
return 1;
}

