
#include<stdio.h>
#define concat(a,b) a##b;

int main()
{
	int a,b;
	int c,d;
	scanf("%d %d",&c,&d);
	int e=concat(1,2);
	printf("%d",e);
	return 0;
}
