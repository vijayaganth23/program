#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
 int i,sle;
 char str[25],tmp;
 clrscr();
 printf("\n Enter the string:");
 scanf("%s",str);
 sle=strlen(str);
 //printf("%d",strlen(str));
 for(i=0;i<strlen(str);i=i+2)
 {
  tmp=str[i+1];
  str[i+1]=str[i];
  str[i]=tmp;
 }
// printf("\n%d",i);
 printf("\nAfter swapping:%s",str);
 if(sle%2!=0)
   printf("%c",str[i-1]);
 getch();
}