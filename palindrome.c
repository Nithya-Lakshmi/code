#include <stdio.h>

int main()
{
 int n,rem,rev=0,t;
 scanf("%d",&n);
 t=n;
 while(t!=0)
 {
   rem=t%10;
   rev=rev*10+rem;
   t=t/10;
 }
 if(rev==n)
 {
   printf("yes");
 }
 else
 {
   printf("no");
 }
return 0;
}
