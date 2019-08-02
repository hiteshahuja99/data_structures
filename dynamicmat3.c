#include<stdio.h>
int main()
{
	int m=6,n=3;int count=0;
	int **arr=(int **)malloc(m*sizeof(int *));

for(int i=0;i<m;i++)
{
	arr[i]=(int *)malloc(n*sizeof(int));
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
