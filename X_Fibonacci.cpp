#include<iostream>
using namespace std;
int main()
{
    int a,b,c,term;
    term=1;
    a=0;
    b=1;
    while(term<=8)
    {
        c = a+b;
        cout<<c<<" ";
        a=b;
        b=c;
        term++;
    }
}
