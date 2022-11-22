#include <stdio.h> 
 int reverse(int num)
{ 
	int rev = 0, r; 
	while(num>0)
	{ 
		r = num%10; 
		rev = rev*10 + r;  
		num = num/10; 
	}
	return rev; 
} 

 
 
int main()
{ 
	int n; 
	printf("Enter number: "); 
	scanf("%d",&n); 
	printf("\nReverse number is: %d", reverse(n)); 
	return 0; 
} 