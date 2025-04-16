#include<iostream>
using namespace std;
class startmachine
{
    public:
    void start()
    {
        func();
        load();
    }

    private:
    void func()
    {
        cout<<"Hello Function"<<endl;
    }

    void load()
    {
        cout<<"Hello load";
    }
};

int main()
{
    startmachine s;
    s.start();
    return 0;
}
