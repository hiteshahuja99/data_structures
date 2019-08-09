#include<stdio.h>
int main(int argc,const char *argv[]){

	int arr[argc-1];int temp;int d=0;
	for(int i=1;i<argc;i++){

		arr[i-1]=atoi(argv[i]);


	}
	for(int i=0;i<argc-1;i++){

		printf("%d",arr[i]);
	}
 for(int i=1;i<argc-1;i++){
d=i;
 while(d>0 && arr[d-1]>arr[d]){

	temp=arr[d-1];
	arr[d-1]=arr[d];
	arr[d]=temp;
	d--;
       }
     }  
	
   printf("\n");
   for(int i=0;i<argc-1;i++){

		printf("%d",arr[i]);

     }
	return 0;
}
