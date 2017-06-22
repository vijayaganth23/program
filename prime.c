#include<stdio.h>
int main()
{
 int num,i,flag=0;
 printf("\nEnter the number:");
 scanf("%d",&num);
 for(i=3;i<num/2;i=i+2)
 {
   if(num%i ==0)
    flag=1;
  }  
  if(flag==0)
   printf("\nThe given number is Prime");
  else
   printf("\nThe given number is Not Prime");
  return 0;
  }
