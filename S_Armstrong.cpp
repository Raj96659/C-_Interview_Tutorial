#include<iostream>
using namespace std;
int main()
{
    int sum,n,r,n1;
    sum = 0;
    cout<<"Enter the number : ";
    cin>>n;

    n1 = n;

    while(n>0)
    {
        r = n%10;
        sum = sum + (r*r*r);
        n = n/10;
    }
    
    if(n1 == sum)
    {
        cout<<"Arm";
    }
    else{
        cout<<"not";
    }

}
