#include<iostream>
using namespace std;
int main()
{
    int n,i,flag;
    cout<<"Enter the number : ";
    cin>>n;

    flag=1;
    i=2;

    while(i<=n/2)
    {
        if(n%i==0)
        {
            flag = 0;
            break;
        }
        i=i+1;
    }

    if(flag==0)
    {
        cout<<"Not";
    }
    else
    {
        cout<<"Prime";
    }
}
