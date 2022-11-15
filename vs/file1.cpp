#include<iostream>
#include<fstream>
using namespace std;
int main()
{   
    string srg;
    ofstream filestream("file1.txt");
    if(filestream.is_open())
    {
        filestream<<"WelCome To Skilqode:";
        filestream<<"\nAfter Exam:";
        filestream.close();
    }
    else
    {
        cout<<"file opening is fail:";
    }
    return 0;


}