#include<iostream>
using namespace std;
int main()
{
    int n,r;
    cout<<"Enter the number : ";
    cin>>n;

    int sum = 0;

    while(n>0)
    {
        r = n%10;
        sum = sum + r;
        n=n/10;
    }
    cout<<sum;
}
