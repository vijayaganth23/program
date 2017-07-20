#include<iostream>
using namespace std;
class fibo
{
 int a,b,c;
 public: 
  fibo()
  {  
  a=-1;
  b=1;
  }
  vodi fibonacci()
  {
   int n;
   cout<<"\nEnter the N value:";
   cin>>n;
   for(int i=1;i<=n;i++)
   {
    c=a+b;
    cout<<" "<<c;
    a=b;
    b=c;
    }
  }
  };
  int main()
  {
   fibo f1;
   f1.fibonacci();
   return 0;
  }
  
