
#include<stdio.h>
int main()
{
	int arr[]={4,-3,9,-1,2,-6};
for(int j=0;j<6;j++)
{int sum=0;
		for(int i=j;i<=j+1&&i<6;i++) {
	
		sum=sum+arr[i];
			printf("%d ",arr[i]);

		}
	

 printf(" sum=%d",sum);
		
printf("\n");

}

int l=0;int sum1[6]={0};
for(int j=0;j<6;j++)
{
	int sum =0;
     


	for(int i=j;i<=j+2&&i<6;i++) {

	
      sum=sum+arr[i];

		printf("%d ",arr[i]);
       

        }

sum1[j]=sum;
printf("sum=%d",sum);	
printf("\n");


}

		return 0;

}
