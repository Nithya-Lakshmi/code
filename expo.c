#include <stdio.h>
int main()
 {
   int n,k,i,a=1;
   scanf("%d %d",&n,&k);
   for(i=1;i<=k;i++)
   {
      a=a*n;
   }
   printf("%d",a);
  return 0;
}
