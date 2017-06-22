#include<stdio.h>
int main()
{
 int num,rem,n;
 int sum=0;
 printf("\nEnter the number:");
 scanf("%d",&num);
 n=num;
 while(num>0)
 {
  rem=num%10;
  sum=sum*10+rem;
  num=num/10;
  }
  if(n==sum)
    printf("\n Given number is palindrome");
  else
   printf("\n Given number is not palindrome");
  return 0;
  }
  
   
