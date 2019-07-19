#include<stdio.h>
int main()
	{
	printf("Enter the size of array");
	int n,j=0;
	scanf("%d",&n);
	int arr[n];
	
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	int r=0;
	printf("enter rotations");
	scanf("%d",&r);
r=r%n;

	for(int i=0;i<r;i++)
{
	int temp=arr[n-1];

	for(int k=n-1;k>0;--k)
	{
		
	arr[k]=arr[k-1];

	}
	
arr[0]=temp;}
for(int i=0;i<n;i++)
{
	printf("%d",arr[i]);
}
return 0;
}


