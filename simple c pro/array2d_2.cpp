#include<iostream>
using namespace std;
int main()
{
	int a[2],b[2];
	int i,j;
	for(i=0;i<2;i++)
	{
		cout<<"enter a:";
		cin>>a[i];	

	}
	for(j=0;j<2;j++)
	{
		cout<<"enter b:";
		cin>>b[j];;	

	}
	cout<<"\n your array is \n";
	for(i=0;i<2;i++)
	{
		cout<<" "<<i,a[i];
		
	}
	cout<<"\n your array is \n";
	for(j=0;j<2;j++)
	{
		cout<<" "<<i,b[j];
	}
}