#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b,c;
 clrscr();
 printf("\nEnter the three numbers:");
 scanf("%d %d %d",&a,&b,&c);
 if(a>b && a>c)
   printf("\nA is greatest");
  elseif(b>c)
   printf("\n B is greatest");
   else
    printf("\n C is greatest");
  }  
