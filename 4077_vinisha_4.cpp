#include<iostream>
using namespace std;

class A
{   protected:
    int a;

    public: 
    void set1()
    {
        cout << "Enter a:";
        cin >> a;
    }
};
class B : public A
{   
    protected:
    int b;

    public: 
    void set2()
    {
        cout << "Enter b:";
        cin >> b;
    }
};

class C : public A
{  
    protected:
    int c;

    public: 
    void set3()
    {
        cout << "Enter c:";
        cin >> c;
    }
};

class D : public B,public C
{   
    protected: 
    int d;

    public:
    void set4()
    {
        cout << "Enter d:";
        cin >> d;
    }
    void get()
    {
        cout << "a:" << B::a << endl << "b:" << b << endl << "c:" << c << endl << "d:" << d << endl;
    }
};

int main()
{
    D o1;

    o1.B::set1();
    o1.set2();
    o1.set3();
    o1.set4();
    o1.get();

    return 0;
}