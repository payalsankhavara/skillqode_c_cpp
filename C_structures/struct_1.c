#include<stdio.h>
struct area
{
	int l;
	int b;
};
int main()
{
	struct area rect1={10,20};
	printf("\n l :%d\tb:%d",rect1.l,rect1.b);
	printf("\narea of ract :%d",rect1.l*rect1.b);
	
	struct area rect2;
	printf("\nEnter Rect 2 :");
	scanf("%d",&rect2.l);

	printf("\nEnter Rect 2 :");
	scanf("%d",&rect2.b);

	printf("\n l :%d\tb:%d",rect2.l,rect2.b);
	printf("\narea of ract :%d",rect2.l*rect2.b);
	
	
	
}