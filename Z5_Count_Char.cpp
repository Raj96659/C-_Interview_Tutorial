#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string str = "Hello welcome to empire";
    char ch = 'e';
    int cnt = 0;
    int len = str.length();
    for(int i=0;i<len;i++)
    {
        if(str[i]==ch)
        {
            cnt++;
        }
    }
    cout<<cnt;
}
