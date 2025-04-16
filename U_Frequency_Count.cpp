#include<iostream>
using namespace std;
int main()
{
    int n,r,digit,cnt;
    cnt = 0;

    cout<<"Enter the number : ";
    cin>>n;

    cout<<"Enter the digit : ";
    cin>>digit;

    while(n>0)
    {
        r = n%10;
        if(r==digit)
        {
            cnt++;
        }
        n = n/10;
    }
    cout<<cnt;
}
