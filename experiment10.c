#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
	char a[50],b[50];
	printf("enter the string:");
	gets(a);
	strcpy(b,a);
	strrev(b);
	if(!strcmp(a,b))
	{
		printf("%s is palindrome",a);
	}
	else
		printf("%s is not palindrome",a);
}
