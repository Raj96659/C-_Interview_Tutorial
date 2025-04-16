#include<iostream>
using namespace std;
class base
{
    public:
    virtual void disp()
    {
        cout<<"Base Class"<<endl;
    }
};

class derive : public base
{
    public:
    void disp() override
    {
        cout<<"Derive class overriding";
    }
};

int main()
{
    base b;
    base* ptr;
    derive d;
    ptr = &d;
    b.disp();
    ptr->disp();
    return 0;
}
