#include<stdio.h>
int main(){
	//A����90-100��B����80-89��C����60-79��D����0-59
//����ĳѧ���ĳɼ��������ѧ���ĳɼ��͵ȼ���
printf("enter the studern score\n");
int score;
while(scanf("%d",&score)){

switch(score/10){
case 10: printf("A\n");break;
case 9:printf("A\n");break;
case 8:printf("B\n");break;
case 7:printf("C\n");break;
case 6:printf("C\n");break;
case 5: case 4: case 3: case 2:  case 1: case 0:
printf("D\n")	;break;
default:printf("error\n");break;
}
//printf("the studern score is:%d the grade is%d",score,grade);
}

return 0;
}



