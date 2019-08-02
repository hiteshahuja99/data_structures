#include<stdio.h>
int main(int argc,char *argv[])
{
	int arr[argc-1];int n;
	for(int i=1;i<argc-1;i++)
	{
		arr[i]=atoi(argv[i]);
                printf("%d",arr[i]);
		
	}
	n=atoi(argv[argc-1]);
	printf("rotaions is %d",n);
printf("\n");
int temp[n];
for(int i=argc-1-n;i<=argc-2;i++)
{
	temp[i]=(arr[i]);
printf("%d",temp[i]);


}
  for(int i=1;i<argc-1-n;i++)
        {
                arr[i]=atoi(argv[i]);
                printf("%d",arr[i]);

        }

return 0;
}
