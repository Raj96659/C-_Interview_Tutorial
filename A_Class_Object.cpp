#include<iostream>
using namespace std;
class car{
    public:
    string brand;
    void start()
    {
        cout<<brand<<" Started";
    }
};

int main()
{
    car mycar;
    mycar.brand = "BMW";
    mycar.start();
    return 0;
}
