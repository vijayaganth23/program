#include<stdio.h>
int main()
{
 int f=1,num,i;
 printf("\nEnter the value:");
 scanf("%d",&num);
 i=1;
 while(num>=i)
 {
  f=f*i;
  i++;
 }
 printf("\nFactorial value=%d",f);
 retrun 0;
 }
 
