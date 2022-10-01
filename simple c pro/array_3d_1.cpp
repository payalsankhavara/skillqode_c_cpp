#include<iostream>
using namespace std;
int main()
{
	int a[5][5][5];
	int i,j,k;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			for(k=0;k<2;k++)
			{

				cout<<"\nEnter A:";
				cin>>a[i][j][k];
			}
		}
	}
	cout<<"Your Matrix is \n\n";
	cout<<"A";
	for(i=0;i<2;i++)
	{	
		for(j=0;j<2;j++)
		{	
			for(k=0;k<2;k++)
			{
				cout<<"\nEnter A:";
                cin>>a[i][j][k];
			}
			cout<<"\n\n";
		}
		cout<<"\n";
	}
}
