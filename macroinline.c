#include<stdio.h>
//#define square(x) x*x;

int main()
{
	inline int square(int x)
	{return x*x;}
	int k=36/square(6);
	printf("%d",k);
	return 0;
}

