#include<iostream>
using namespace std;
class test
{
    public:
    test()
    {
        cout<<"Default Constructor"<<endl;
    }

    test(int a)
    {
        cout<<"Parameterized Constructor : "<<a;
    }
};

int main()
{
    test t;
    test t2(12);
    return 0;
}
