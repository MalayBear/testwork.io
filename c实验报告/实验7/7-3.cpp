#include<stdio.h>
int main ()
{
	int x,y,z;
	for(x=0;x<16;x++)
	{	
		y=25-1.75*x;
		z=0.75*x+75;
	
	if(x+y+z==100&&15*x+9*y+z==300&&z%3==0)
	{
		printf("¹«¼¦£º%d,Ä¸¼¦£º%d,¼¦×Ð£º%d\n",x,y,z);
	}
	}
return 0;
}

