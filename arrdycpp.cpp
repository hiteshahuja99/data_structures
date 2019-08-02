#include<array>
#include<iostream>
using namespace std;
int main(void)
{
	array<int,6>
	array={0,1,2,3,4,5}; 
	for(int i=0;i<6;i++)
	{
		cout<<array.at(i)<<" ";
	}
	cout<<"\n";

// for(int i=0;i<6;i++)
   //    {
  //              cout<< get<i>(array) <<" ";
     //   } 
         
 cout<<get<1>(array) <<" ";
        
                cout<<array.front()<<" ";
       
                cout<<array.back()<<" ";
        

}

