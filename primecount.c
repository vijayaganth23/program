#include<stdio.h>
int main()
{
 int num,i,j,flag,count=0;
 scanf("%d",&num);
 for(i=3;i<=num;i=i+2)
 {
  flag=0;  
  for(j=2;j<i;j++)
  {
   if(i%j==0)
     flag=1;
   }
   if(flag==0)
   {
    printf("%d",i);
    count++;
  }
 }
 printf("%d",count+2);
  return 0;
  }
    
