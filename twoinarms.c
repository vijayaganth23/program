#include <stdio.h>

int main(void) {
	
  int n,s,r,i,i1,j=1;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
  	 i1=i;
  	 s=0;
  	 while(i>0)
  	 {
  	 	 r=i%10;
  	 	 s=s+i*i*i;
  	 	 i=i/10;
  	 }
  	 if(i1==i)
  	 {
  	 	j++;
       if(j%2==0)     	 
  	       printf("\nArmstrong Number=%d",i);
  	  }
  }
	return 0;
}
