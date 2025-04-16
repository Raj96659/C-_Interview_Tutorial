#include<iostream>
using namespace std;

class animal
{
    public:
    void speak()
    {
        cout<<"Animals Speak"<<endl;
    }
};

class dog : public animal{
    public:
    void bark()
    {
        cout<<"Dog Barks";
    }

};
int main()
{
    dog d;
    d.speak();
    d.bark();
    return 0;
}
