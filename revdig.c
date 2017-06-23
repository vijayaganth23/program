#include<stdio.h>
int main()
{
 int num,revno,rem;
 scanf("%d",&num);
 revno=0;
 while(num>0)
 {
  rem=num%10;
  revno=revno*10+rem;
  num=num/10;
 }
 printf("%d",revno);
 return 0;
 }
  
