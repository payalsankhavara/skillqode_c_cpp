#include<iostream>
using namespace std;
int main()
{
	int i,j,n=5;
	for(i=n;i>=1;i--)
	{
		for(j=n;j>=i;j--)
		{
			cout<<"\t"<<i;
		}
		cout<<"\n";
	}
	
}