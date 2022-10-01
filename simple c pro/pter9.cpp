#include<iostream>
using namespace std;
int main()
{
	int i,j;
	char n=65;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j=j+1)
		{
			cout<<"\t"<<(char)(n++);
		}
		cout<<"\n";
	}
	
	return 0;
}