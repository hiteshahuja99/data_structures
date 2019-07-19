#include<stdio.h>
int main()
{
	int n,i=0,l=(2*i)+1,r=(2*i)+2;
	int largest=i;int temp;
	printf("Array size");
	scanf("%d",&n);
	int arr[n];
	for(int k=0;k<n;k++)
	{
		scanf("%d",&arr[k]);

	}
for(int m=0;m<n;m++)
{
	if(arr[l]>arr[largest])
			{
			temp=arr[l];
			arr[l]=arr[largest];
			arr[largest]=temp;
		
			}

	        if(arr[r]>arr[largest])
                        {
                        temp=arr[r];
                        arr[r]=arr[largest];
                        arr[largest]=temp;
                     
		      	}

}
	
	
for(int k=0;k<n;k++)
{
	printf("%d",arr[k]);
}

return 0;
}

