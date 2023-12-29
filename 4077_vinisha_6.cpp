#include<iostream>
using namespace std;

class A
{
    int a;
    public:
    void set()
    {
        cout << "Enter a:";
        cin >> a;
        cout << "a" << a;
    }
};

class B : public A
{
    int b;
    public:
    void set()
    {
        cout << "Enter b:";
        cin >> b;
        cout << "b:" << b;
    }
};

int main()
{
    B o1;

    o1.set();

    return 0;
}