#include<iostream>
using namespace std;
int main()
{
    int n,i,sum;
    sum=0;
    cout<<"Enter the number : ";
    cin>>n;

    i = 1;

    while(i<=n/2)
    {
        if(n%i==0)
        {
            sum = sum+i;
        }
        i=i+1;
    }
    if(sum==n)
    {
        cout<<"Perfect";
    }
    else
    {
        cout<<"not";
    }
}

// Because any number greater than n/2 cannot divide n unless it’s n itself.
