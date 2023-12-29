#include<iostream>
using namespace std;

int factorial(int n)
{   int fact=1;
    if(n==0)
    {
        return fact;
    }
    else
    {
        fact=n*factorial(n-1);
    }
}
int main()
{
    int a,ans=1;

    cout << "Enter any number:";
    cin >> a ;

    ans=factorial(a);
    cout << "factorial : " << ans;

    return 0;
}