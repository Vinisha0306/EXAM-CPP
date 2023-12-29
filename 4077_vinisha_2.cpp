#include<iostream>
#include<string.h>
using namespace std;

class Account
{
    public:

    int n;
    char name[20],type[20],branch[20],balance[20];

    void setter()
    {
        cout << "Enter Account number: ";
        cin >> n;
        cout << "Enter account name: ";
        fflush(stdin);
        gets(name);
        cout << "Enter Account Type: ";
        gets(type);
        cout << "Enter Account Branch: ";
        gets(branch);
        cout << "Enter Account Balance: ";
        gets(balance);
        cout << endl ;
    }

    void getter()
    {
        cout << endl << "Account number:" << n << endl;
        cout << "Account name :" << name << endl;
        cout << "Account Type :" << type << endl;
        cout << "Account Branch :" << branch << endl;
        cout << "Account Balance : " << balance << endl;
    }
};

int main()
{
    int num;
    int ac;

    cout << "Enter Total Account:";
    cin >> num;

    Account a1[num];

    for(int i=0;i<num;i++)
    {
        a1[i].setter();
    }

    cout << "Enter search Account number:";
    cin >> ac;

    for(int i=0;i<num;i++)
    {
        if(a1[i].n==ac)
        {
            a1[i].getter();
        }
    }

    return 0;
}