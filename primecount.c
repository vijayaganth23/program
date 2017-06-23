#include<stdio.h>
int main()
{
 int num,i,flag;
 scanf("%d",&num);
 for(i=3;i<=n;i++)
 {
  flag=0;  
  for(j=3;j<=num/2;j+=2)
  {
   if(i%j==0)
     flag=1;
   }
   if(flag==1)
    printf("%d",i);
  }
  return 0;
  }
    
