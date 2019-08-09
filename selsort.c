#include<stdio.h>
int main(int argc,const char*argv[]){

	int temp=0;
	int arr[argc-1];
	for(int i=1;i<argc;i++)
	{
		arr[i-1]=atoi(argv[i]);
	}
	for(int i=0;i<argc-1;i++){
		for(int j=i+1;j<argc-1;j++){
			if(arr[i]>arr[j]){
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
		for(int i=0;i<argc-1;i++){
			printf("%d",arr[i]);
		}
		return 0;
}

