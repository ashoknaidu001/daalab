#include<stdio.h>
int main()
{
	int num,count,i;
	printf("enter the number:");
	scanf("%d",&num);
	for(i=2;i<=num;i++)
	{
		if(num%i==0)
		count++;
	}
	if(count>=2)
		printf("%d is not prime",num);
	else
		printf("%d is prime",num);
}
