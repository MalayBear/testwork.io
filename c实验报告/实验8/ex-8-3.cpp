#include<stdio.h>
int main()
{
	int score[10];
	int i;
	int j;
	int t;
	printf("������10��ѧ���ĳɼ�\n");
	for(i=0;i<10;i++)
	{	
		scanf("%d",&score[i]);
	}
	for(j=0;j<9;j++)
	{
	for(i=0;i<9-j;i++)
	{
		if(score[i]<score[i+1])
		{
			t=score[i];
			score[i]=score[i+1];
			score[i+1]=t;
		}
	}
	
	}
	printf("�ɼ��ɴ�С����Ϊ\n");
	for(i=0;i<10;i++)
	{
		printf("%d ",score[i]);
	}
return 0;
}

