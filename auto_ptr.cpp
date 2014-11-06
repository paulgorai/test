#include<iostream>
using namespace std;

template<class T>
class a_ptr
{	
public:
    //constructor
    explicit a_ptr(T* p = 0);
    //copy constructor
    a_ptr(a_ptr<T>& rhs);
    //assignment operator
    a_ptr<T>& operator=(a_ptr<T>& rhs);
    //destructor
    ~a_ptr();
    //*value at operator
    T& operator*();
    //arrow operator
    T* operator->();
    T* release();
    void reset(T* p);
private:
    T *pointee; 
};

template<class T>
a_ptr<T>::a_ptr(T* p):pointee(p)
{
    cout<<"\nConstructor Called";
}

template<class T>
a_ptr<T>::a_ptr(a_ptr<T>& rhs)
{
    cout<<"\nCC called";
    rhs.release();
}

template<class T>
a_ptr<T>& a_ptr<T>::operator=(a_ptr<T>& rhs)
{
    cout<<"\nAssignment called";
    if(this != &rhs)
    reset(rhs.release());
    return *this;
}

template <class T>
T* a_ptr<T>::operator->()
{
    return pointee;
}

template <class T>
T& a_ptr<T>::operator*()
{
    return *pointee;
}

template <class T>
T* a_ptr<T>::release()
{
    T* old = pointee;
    pointee = 0;
    return old;
}

template <class T>
void a_ptr<T>::reset(T* p)
{
    delete pointee;
    pointee = p; 
}

template <class T>
a_ptr<T>::~a_ptr()
{
   cout<<"\nCalled destructor:"<<pointee<<endl;
   delete pointee;
}

int main()
{
a_ptr<int> aptr1 (new int); 
int *ptri = new int;
a_ptr<int> aptrn = aptr1;
a_ptr<int> ptrnew(aptr1);

return 1;
}
