#include<iostream>
using namespace std;
int main()
{
    int a,b,temp;
    a=10;
    b=20;
    temp = a;
    a = b;
    b = temp;

    cout<<a<<endl;
    cout<<b;
}
