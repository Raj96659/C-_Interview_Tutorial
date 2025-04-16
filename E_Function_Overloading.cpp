#include<iostream>
using namespace std;

class test
{
    public:
    void add(int a,int b)
    {
        int sum = a+b;
        cout<<"Addition is : "<<sum<<endl;
    }

    void add(int r)
    {
        int area = r*r;
        cout<<"Area is : "<<area;
    }
};

int main()
{
    test t;
    t.add(12,13);
    t.add(4);
    return 0;
}
