#include<iostream>
#include<string.h>
using namespace std;

class Hotel
{
    public:

    Hotel(int number,int Rating,char Name[20],char Type[20],char Location[20])
    {
        cout << "Hotel Number:" << number << endl 
            << "Hotel Name:" <<  Name<< endl 
            << "Hotel Type:" << Type << endl 
            << "Hotel Rating:" << Rating << endl
            << "Hotel Location:" << Location << endl << endl ;
    }
};

int main()
{
    int number,Rating,n;
    char Name[20],Type[20],Location[20];

    cout << "Enter Total Hotel:";
    cin >> n;

    
    for(int i=0 ;i < n ; i++)
    {   
        cout << "Enter Hotel Number:";
        cin >> number;
        cout << "Enter Hotel Name:";
        fflush(stdin);
        gets(Name);
        cout << "Enter Hotel Type (like hotel or motel):";
        gets(Type);
        cout << "Enter Hotel Rating:";
        cin >> Rating;
        cout << "Enter Hotel Location:";
        fflush(stdin);
        gets(Location);
        cout << endl ;

        Hotel h1(number,Rating,Name,Type,Location);
    }

    return 0;
}