#include<stdio.h>
int main()
{
	int arr[10],n,i,j,temp;
	printf("enter size:");
	scanf("%d",&n);
	printf("the elements are:");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		if(arr[i]>arr[j])
		{
	
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}		
	}
	printf("bubble sort:");
	for(i=0;i<n;i++)
	printf("%d ,",arr[i]);
}
