#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],mul[10][10],i,j,k,r,c;
	printf("enter the no of rows:");
	scanf("%d",&r);
	printf("enter the no of columns:");
	scanf("%d",&c);
	printf("\nfirst matrix:");
	for(i=0;i<r;i++)
	for(j=0;j<c;j++)
		scanf("%d",&a[i][j]);
	printf("\nsecond matrix:");
	for(i=0;i<r;i++)
	for(j=0;j<c;j++)
		scanf("%d",&b[i][j]);
	for(i=0;i<r;i++)
	for(j=0;j<c;j++)
	{
		mul[i][j]=0;
		for(k=0;k<r;k++)
		{
			mul[i][j]+=a[i][k]*b[k][j];
		}
	}
	printf("matrix multiplication:");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		printf("%d ",mul[i][j]);
		printf("\n");
	}
}
