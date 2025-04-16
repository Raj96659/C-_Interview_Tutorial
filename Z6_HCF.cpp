#include<iostream>
using namespace std;
int main()
{
    int a,b,r,hcf;
    cout<<"Enter the number : ";
    cin>>a>>b;

    while(true)
    {
        hcf = b;
        r = a%b;
        a=b;
        b=r;
        if(b==0)
        {
            break;
        }
    }
    cout<<hcf;
}
