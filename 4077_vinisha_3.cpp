#include<iostream>
using namespace std;

int main()
{
    int a,b;
    char str[]="can not divide by 0";

    cout << "Enter A:";
    cin >> a;
    cout << "Enter b:";
    cin >> b;

    try
    {
        if(a==0 || b==0)
        {
            throw str;
        }
        else
        {
            cout << a << "/" << b << "=" << a/b;
        }
    }
    catch(char e[])
    {
        cout << e;
    }
    return 0;
}