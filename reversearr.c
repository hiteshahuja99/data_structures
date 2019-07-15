#include<stdio.h>
#include<stdlib.h>
int main(int argc, const char *argv[])
{
        int arr[argc-1];
        int j=0;
        int l=0;
        int ar[argc-1];
        for(int i=1;i<argc;i++)
        {
                arr[j]=atoi(argv[i]);
                j++;
         printf("%d",arr[j-1]);
        }

        for(int k=(sizeof(arr)-1)/4;k>=0;k--)

        {
                ar[l]=arr[k];
                l++;
                printf("%d",arr[k]);
        }

        return 0;
}

