#include<stdio.h>
#include<stdlib.h>
int main(int argc, const char *argv[])
{
        int arr[argc-1];
        int j=0;
        int l=(sizeof(arr)/sizeof(arr[0]))-1;
        int ar[(sizeof(arr))/4];
        for(int i=1;i<argc;i++)
        {
                arr[j]=atoi(argv[i]);
                j++;
         printf("%d",arr[j-1]);

	}
 printf("\n");

        for(int k=0; k<(sizeof(arr))/4;k++)

        {
                ar[l]=arr[k];
                l--;
               
        }
	for(int i=0;i<(sizeof(arr)/sizeof(arr[0]));i++)
	{
	
		printf("%d",ar[i]);
	}

        return 0;
}

