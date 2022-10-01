#include<iostream>
using namespace std;
int main()
{
    char i;
    for(i=1;i<=25;i=i+4)
    {
        cout<<"\t"<<(char)(i+64)<<"\t"<<(char)(i+98);
    }
}