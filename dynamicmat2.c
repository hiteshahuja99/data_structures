#include<stdio.h>
int main()
{
	int m=2;
	int *arr[m];
	int count=0;
	for(int i=0;i<m;i++)
	{
		arr[i]=(int*)malloc(m*sizeof(int));
	}
	for(int i=0;i<m;i++)
	{
	printf("\n");
		for(int j=0;j<m;j++)
		{
			*(*(arr+i)+j)=count++;
			printf("%d",*(*(arr+i)+j));
		}
	}
	return 0;
}

