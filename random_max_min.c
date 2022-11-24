#include<stdio.h>
int main()
{
    int max,min;
    printf("Enter max Val:");
    scanf("%d",&max);
    printf("Enter min Val:");
    scanf("%d",&min);
    for(int i=0;i<10;i++)
    printf("%d  \n",rand()%(max-min)+min);
       
}


















































