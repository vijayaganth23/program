#include<stdio.h>
int main()
{
 int n,i,sum=1;
 scanf("%d",&n);
 for(i=2;i<=n;i++)
   sum=sum+i;
 printf("sum=%d",sum);
} 
