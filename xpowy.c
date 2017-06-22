#include<stdio.h>
int main()
{
 int x,y,tot;
 printf("\nEnter the value of X and Y:");
 scanf("%d %d",&x,&y);
 tot=1;
 while(y>=1)
 {
  tot=tot*x;
  y--;
 }
 printf("\n %d power %d = %d",x,y,tot);
 return 0;
 }
 
  
