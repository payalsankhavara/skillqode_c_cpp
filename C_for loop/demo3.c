#include<stdio.h>
int main()
{
    float i,a=0.5,n;
    printf("n=");
    scanf("%f",&n);
    for(i=0.5;i<=n;i++)
    {
        printf("\t%.1f",a);
        a=a+i;
    }
}