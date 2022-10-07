#include<iostream>
using namespace std;
class Student
{
    int Admno;  
    string Sname;
    float English,Math,Science,total,per;
    
    public:
    

    int TakeData()
    {
        cout<<"Enter AdmNo:";
        cin>>Admno;
        cout<<"Enter Student Name:";
        cin>>Sname;
        cout<<"Enter English Marks:";
        cin>>English;
        cout<<"Enter Math Marks:";
        cin>>Math;
        cout<<"Enter Science Marks:";
        cin>>Science;
    }
    float cTotal()
    {
        total=English+Math+Science;
        cout<<"\nTotal Is:"<<total;
    }    
    float ShowData()
    {
        per=total/3;
        cout<<"\nPer is:"<<per;
    }
};

int main()
{
    Student stud;
    stud.TakeData();
     stud.ShowData();
    stud.cTotal();
   
    
}