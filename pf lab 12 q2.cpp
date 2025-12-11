#include<iostream>
using namespace std;

template <typename t, t max >
t Minimum(t arr[] , t size)
{
	t min =(t)(arr[0]);
	for(int i=0; i<size;i++)
	{
		if(arr[i]<min)
		{
		min=arr[i];
	}
}
	return min;
	
 }
 
 int main()
 {
 	int arrayint[]={10,20,15,12};
 	int size=sizeof(arrayint)/sizeof(arrayint[0]);
 	cout<<"MINIMUM value in integer is : "<<Minimum<int , 10000>(arrayint,size)<<endl;
 	
 	unsigned char arraychar[]= {'1','2','3','4'};
	 int sizechar =sizeof(arraychar)/sizeof(arraychar[0]);
	 cout<<"Minimum value of character is : "<<int(Minimum<unsigned char,255>(arraychar,sizechar))<<endl;
	 return 0;
  } 