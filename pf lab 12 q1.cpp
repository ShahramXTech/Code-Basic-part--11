#include<iostream>
using namespace std;
 
 template <typename x>
  x myMax(x a, x b)
 {
 	
 	return (a>b )? a:b;
 }
  
  int main()
  {
  	int a,b;
  	cout<<"enter the integer number : ";
  	cin>>a;
  	cout<<"enter the integer number : ";
  	cin>>b;
  	
  	cout<<"Max integer is  : "<<myMax(a,b)<<endl;
  	
  	double c,d;
  	cout<<"enter the point number : ";
  	cin>>c;
  	cout<<"enter the point  number : ";
  	cin>>d;
  	
  	cout<<"Max double values is : "<<myMax(c,d)<<endl;
  	
  	char y,z;
  	cout<<"enter the character number : ";
  	cin>>y;
  	cout<<"enter the character number : ";
  	cin>>z;
  	cout<<"Max character is : "<<myMax(y,z)<<endl;
  }