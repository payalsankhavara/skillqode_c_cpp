#include<stdio.h>
int main()
{
    int a[]={11,12,13,14,15};
    for(int i=0;i<5;i++)
    {
        printf("\n%d -%u",a[i],&a[i]);
       
    }
     printf("\n %d",sizeof(int));
}



/*#include<stdio.h>
int main()
{
    int arr[]={1,20,25,26,32,33,25,45},i,element;
    printf("%d",arr[2]);
    int a=10;
    float b=3.14;
    char c='a';
    double d='a';
    long double e='a';
   //printf("\n int %d",sizeof (a));
   //printf("\n float %d",sizeof (b));
   //printf("\n char %d",sizeof (c));
   //printf("\n double %d",sizeof (d));
   //printf("\n long double %d",sizeof (e));

    printf("\n\n size of array %d",sizeof (arr));
   printf("\n\n array element size %d",sizeof (arr[0]));
   printf("\n\n array size %d",sizeof (arr)/sizeof(arr[0]));

   printf("\nenter element=");
   scanf("%d",&element);
   arr[sizeof (arr)/sizeof(arr[0])]=element;
    printf("\n\n array size %d",sizeof (arr)/sizeof(arr[0]));
}*/