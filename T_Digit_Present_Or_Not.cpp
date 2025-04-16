#include<iostream>
using namespace std;
int main()
{
    int n,r,digit,flag;
    flag = 0;
    cout<<"Enter the number : ";
    cin>>n;

    cout<<"Enter the digit : ";
    cin>>digit;

    while(n>0)
    {
        r = n%10;
        if(r==digit)
        {
            flag = 1;
            break;
        }
        n = n/10;
    }

    if(flag==1)
    {
        cout<<"Digit present";
    }
    else
    {
        cout<<"Not Present";
    }
}
