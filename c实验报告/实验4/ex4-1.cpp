#include<stdio.h>
int main(){
	int x,y,z,u,v;
	scanf("%d %d %d",&x,&y,&z);
	u=x<y?x:y;
	v=u<z?u:z;
	printf("the min is %d\n",v);

return 0;
}

