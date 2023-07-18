#include <stdio.h>
int main()
{
 int n;
 double sum=1;
 scanf("%d",&n);
 for(int i=1;i<=n;i++)
 {
 	sum=sum*i;
 }
 printf("%d!=%.0f\n",n,sum);

	return 0;
}
