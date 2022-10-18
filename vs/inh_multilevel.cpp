#include<iostream>
#include<string.h>
using namespace std;
class Student
{
        int r1;
        char nm[20];
    public:
        void Read();
        void Dispaly();
};
class Marks:public Student
{
    protected:
        int s1,s2,s3;
    public:
        void getMarks();
        void putMarks();    
};
class Result : public Marks
{
        int t;
        float p;
        char div[10];
    public:
        void Process();
        void printResult();
};
void Student::Read()
{
    cout<<"Enter Roll No:";
    cin>>r1;
    cout<<"Enter Name:";
    cin>>nm;
    cout<<"\n";
};
void Student ::Dispaly()
{
    cout<<"\n Roll NO:"<<r1;
     cout<<"\n Name:"<<nm;
     cout<<"\n";
}
void Marks :: getMarks()
{
    cout<<"Enter Marks For 1 Subject:";
    cin>>s1;
    cout<<"Enter Marks For 2 Subject:";
    cin>>s2;
    cout<<"Enter Marks For 3 Subject:";
    cin>>s3;
}
void Marks::putMarks()
{
    cout<<"Subject 1:"<<s1<<endl;
    cout<<"Subject 2:"<<s2<<endl;
    cout<<"Subject 3:"<<s3<<endl;
}
void Result::Process()
{
    t=s1+s2+s3;
    p=t/3.0;
    p>=60 ? strcpy(div,"First"):p>=50 ? strcpy(div,"Second"):strcpy(div,"Third");
}
void Result ::printResult()
{
    cout<<"Total:"<<t<<endl;
    //cout<<"\t";
    cout<<"Precentage:"<<p<<endl;
    cout<<"Division:"<<div<<endl;
}
int main()
{
    Result x;
    x.Read();
    x.getMarks();
    x.Process();
    x.Dispaly();
    x.putMarks();
    x.printResult();
    return 0;
}