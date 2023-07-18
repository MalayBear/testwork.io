#include<stdio.h>
int main(){

int a,n,count=1;
  long sn=0,tn=0;
  printf("please input a and n\n");
  scanf("%d,%d",&a,&n);
  printf("a=%d,n=%d\n",a,n);
 for(count=1;count<=n;count++)
 {
 	tn=tn+a;
 	sn=sn+tn;
 	a=a*10;
 }
  printf("a+aa+...=%ld\n",sn);
  return 0;
  }




