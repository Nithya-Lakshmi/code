#include <stdio.h>
int main()
{
  int a[10],i,n,m,sum=0;
  scanf("%d",&n);
  scanf("%d",&m);
  for(i=0;i<n;i++)
  {
  scanf("%d",&a[i]);
  }
  for(i=1;i<=m;i++)
{
  sum=sum+i;
}  printf("%d\n",sum);
  return 0;
}
