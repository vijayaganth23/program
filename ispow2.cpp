#include <iostream>
using namespace std;

class ispow2

{
	
int num;
	
public:
	 
void getnum()
	 
{
	 	 
cout<<"\nEnter the number:";
	 	 
cin>>num;
	
}
	 
void ispower2()
	 
{
	 	

int flag=0;
	 	
if(num%2==0)
	 	
{
	 		
while(num!=1)
	 		
{
	 			
if(num%2!=0)
	 			  
flag=1;
	 			 
num=num/2; 
	 		
}
	 	
}
	 	
if(flag==0)
	 	 
cout<<"\nThe given number is power of 2";
	 	
else
	 	 
cout<<"\nThe given number is not power of 2";
	
 }

}; 

int main() 

{
 
ispow2 ip2;
 
ip2.getnum();
 
ip2.ispower2();
 return 0;

}