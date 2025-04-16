#include<iostream>
using namespace std;
class Bank
{
    private:
    int balance;

    public:
    void setbalance(int b)
    {
        balance = b;
    }

    int getbalance()
    {
        return balance;
    }
};

int main()
{
    Bank b;
    b.setbalance(4000);
    cout<<b.getbalance();
    return 0;
}
