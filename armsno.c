#include<stdio.h>
#include<conio.h>
int main()
{
 int n,n1,r,s=0;
 scanf("%d",&n);
 n1=n;
 while(n>0)
 {
  r=n%10;
  s=s+(r*r*r);
  n=n/10;
  }
  if(n1==s)
   printf("Armstrong Number");
  else
   printf("\nNot an Armstrong Number");
  return 0; 
  } 
  
