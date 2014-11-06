#include<iostream>

using namespace std;

class IacTransferMethod
{
public:
virtual void transfer()=0;
};

class TransferSP : public IacTransferMethod
{
public:
void transfer()
{
    cout<<"This is TransferSP";
}

};

class TransferDateTime : public IacTransferMethod
{

public:
void transfer()
{
    cout<<"This is TransferDateTime";
}
};


class IacTransferRequest
{
IacTransferMethod *method;

public:

virtual void initiateTransfer()
{
    method->transfer();
}

virtual void setTransferMethod(IacTransferMethod *tm)
{
   method = tm; 
}

virtual void display()=0;

};

class DataRow: public IacTransferRequest
{
public:
void display()
{
    cout<<"DataRow Transfer"<<endl;
}
};

class DataSet: public IacTransferRequest
{
public:
void display()
{
    cout<<"DataSet Transfer"<<endl;
}
};

int main()
{

IacTransferRequest *rqt = new DataSet;
rqt->display();
rqt->setTransferMethod(new TransferDateTime());
rqt->initiateTransfer();

return 1;
}

