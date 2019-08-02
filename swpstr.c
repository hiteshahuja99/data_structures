#include<stdio.h>
int main()
{
	int n1=0;
	scanf("%d",&n1);
	char s1[n1];
	char s2[n1];
	char temp;
	//int len=(sizeof(s1)/sizeof(s1[0]));
	//printf("%d",len);
	for(int i=0;i<n1;i++)
	{
	scanf("%s",&s1[i]);
	}
	for(int i=0;i<n1;i++)
	{
	scanf("%s",&s2[i]);
	}
	for(int j=0;j<n1;j++)
	{
		temp=s1[j];
		s1[j]=s2[j];
		s2[j]=temp;
	}
	
	
		printf("%s\n",s1);
		printf("%s",s2);
	
	return 0;

}

