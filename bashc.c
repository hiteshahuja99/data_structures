#include<stdio.h>
#include<stdlib.h>
#define SHELLSCRIPT " #/bin/bash \n\ read filename\n \ echo \"The $filename is in :-\" \n \ locate $filename\n \ echo \"you are now in this directory :-\" \n \ pwd"
int main()
{
	system(SHELLSCRIPT);
	return 0;
}

