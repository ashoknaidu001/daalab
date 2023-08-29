#include<stdio.h>
int main()
{
	int c,rem,sum,num,temp;
	printf("enter the number:");
	scanf("%d",&num);
	temp=num;
	while(num>0)
	{
		rem=num%10;
		c=rem*rem*rem;
		num=num/10;
		sum=sum+c;		
	}
	if(temp==sum)
	printf("%d is armstrong",temp);
	else
	printf("%d is not armstrong",temp);
}
