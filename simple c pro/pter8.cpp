#include<iostream>
using namespace std;
int main()
{
    int i,j,a=97;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(j%2==0)
            cout<<"\t"<<(char)(a-32);
            else
            cout<<"\t"<<(char)(a);
            a++;
        }
        cout<<"\n";
    }
}