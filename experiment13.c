#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	printf("enter string:");
	scanf("%s",s);
	printf("reverse string:%s",strrev(s));	
}
