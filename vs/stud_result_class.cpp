#include<iostream>
using namespace std;
class Student
{
    int rollno,maths,chemistry,physics,total;
    char grade;
    float marks;
    public:
    void studInformation()
    {
        cout<<"Enter RollNo:";
        cin>>rollno;
        cout<<"Enter Maths:";
        cin>>maths;
        cout<<"Enter chemistry:";
        cin>>chemistry;
        cout<<"Enter Physics:";
        cin>>physics;

    }
    void resultClaculate()
    {
        
        total=maths+chemistry+physics;
        cout<<"\nTotal is:"<<total;
        marks=total/3;
        cout<<"\n per is:"<<marks;                                     


    }
    void studgeade()
    {
        if(marks>75)
        {
            cout<<"\ngrade : A";
        }
        else if(marks<=75 && marks>60)
        {
            cout<<"\ngrade : B";
        }
        else if(marks>60 && marks>45)
        {
            cout<<"\ngrade : C";
        }
        else if(marks>45 && marks>35)
        {
            cout<<"\ngrade : D";
        }
        else if(marks<=35)
        {
            cout<<"\ngrade :FAIL";
        }
    }    
};
int main()
{
    Student stud1;
    stud1.studInformation();
    stud1.resultClaculate();
    stud1.studgeade();
    
}