#include<stdio.h>
int main(int argc,char *argv[])
{
	int n=atoi(argv[argc-1]); //will store the number of rotations had done
int temp[n]; //will store the rotated elements

for(int i=n+1;i<=argc-2;i++)
{
	printf("%d",atoi(argv[i]));
}
for(int i=1;i<n+1;i++)
{
        temp[i]=atoi(argv[i]);

	printf("%d",temp[i]);
}
return 0;
}
 
