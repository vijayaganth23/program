#include<stdio.h>
int main()
{
 int n,i,j,flag;
 scanf("%d",&n);
 for(i=3;i<=n;i=i+2)
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
