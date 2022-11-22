#include<stdio.h>
int main()
{
    char i;
    for(i=1;i<=25;i=i+4)
    {
        printf("\t%c\t%c",i+64,i+98);
    }
}