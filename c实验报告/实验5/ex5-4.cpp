#include<stdio.h>
//�û����������a������Ʒ��g�ͷ�������s��f-�Զ���m-�Լ���e-Э���������㲢���Ӧ����M��

int main(){
float a,r1,r2,M;
char g,s;
printf("please enter amount��gasoline��service��");
scanf("%f,%c,%c",&a,&g,&s);
//�Զ�����վ��x��y��z�������ͣ����۷ֱ�Ϊ8.80��8.35��8.18
switch(g)
{
case 'x':r1=8.80;break;
case 'y':r1=8.85;break;
case 'z':r1=8.18;break;
		                             		                             
}
//�Լ���"��"Э����"��������ȼ����Ա��û��õ�10%��5%���Żݡ�
switch(s)
{
case 'f':r2=0;break;  
case 'm': r2=0.1;break;
case 'e':r2=0.05;break;              
}
M=r1-(r1*r2);
printf("The total cost��%.2f\n",M);


return 0;
}

