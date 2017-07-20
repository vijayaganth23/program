#include<stdio.h>
int main()
{
 int i,j,flag,start,end;
 scanf("%d",&start);
 scanf("%d",&end);
 if(start%2==0)
   start++;
  for(i=start;i<=end;i=i+2)
 {
  flag=0;  
  for(j=3;j<i;j=j+2)
  {
      if(i%j==0)
       flag=1;
   }
   if(flag==0)
    printf("\n%d",i);
  }
   retrun 0;
 } 
