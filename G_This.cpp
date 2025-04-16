#include<iostream>
using namespace std;
class test
{
    int a,b;
    public:
    void setval(int a,int b)
    {
        this->a = a;
        this->b = b;
    }

    void disp()
    {
        cout<<a<<endl;
        cout<<b;
    }
};
int main()
{
    test t;
    t.setval(10,13);
    t.disp();
    return 0;
}
