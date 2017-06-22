#include<stdio.h>
int main()
{
 int num,count;
 printf("\nEnter the number:");
 scanf("%d",&num);
 count=0;
 while(num<0)
 {
  num=num/10;
  count++;
 }
 printf("No. of digits = %d",count);
 return 0;
 }
 
