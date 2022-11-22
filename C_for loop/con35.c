#include<stdio.h>
int main()
{
    int i,j,a=65;
    for(i=1;i<=5;i=i+1)
    {
        for(j=1;j<=i;j++)
        {
            if(i%2==0)
            printf("\t%c",a+32);
            else
            printf("\t%c",a);
            a++;
        }
        printf("\n");
    }
}