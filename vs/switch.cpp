#include<iostream>
using namespace std;
int main()
{
    int ch;
    cout<<"\n Enter Your Day...";
    cin>>ch;
    switch (ch)
    {
    case 1:
        cout<<"\n Monday";
        break;
    case 2:
        cout<<"\n tuesday";
        break;
    case 3:
        cout<<"\n Wendsday";
        break;
    case 4:
        cout<<"\n Thursday";
        break;
    case 5:
        cout<<"\n Friday";
        break;
    case 6:
        cout<<"\n Saturday";
        break;
    default:
        cout<<"\n Wrong Choice:";
        break;
    }
}