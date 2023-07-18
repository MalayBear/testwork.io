#include<stdio.h>
int main(){
	int i,j,k,a;

	int count=0;
	for(i=1;i<5;i++)
	{
		for(j=1;j<5;j++)
	{
			if(i==j)
			{
				continue;
			}
		
		for(k=1;k<5;k++)
		{
			if(i==k||j==k)
			{
				continue;
			}	
		
		a=i*100+j*10+k;
		printf("%d\n",a);
		count++;
	    }
	}
	}
		printf("共有%d个数",count);
		

return 0;
}

