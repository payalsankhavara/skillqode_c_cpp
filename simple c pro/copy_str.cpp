#include <iostream>
#include<string>
using namespace std;
int mystring()
{
    string s2;
}

int main()
{
    string s1,s2;

    cout << "Enter string s1: ";
    getline (cin, s1);

    s2 = s1;

    cout << "s1 : "<< s1 << endl;
    cout << "Copy string:"<< s2;

    mystring();
}