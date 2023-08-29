#include<stdio.h>
int main()
{
	int fact=1,i=1,num;
	printf("enter the number:");
	scanf("%d",&num);
	for(i=2;i<=num;i++)
	{
		fact=fact*i;
	}
	printf("the factorial of %d is %d",num,fact);	
}
