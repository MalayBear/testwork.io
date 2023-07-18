#include<stdio.h>
int main(){
	int score;
	printf("enter the student score\n");
	scanf("%d",&score);
	if(score<=100&&score>=90){
		printf("score=%d,grade:A",score);
	}
	else if(score<=89&&score>=80){
		printf("score=%d,grade:B",score);
	}
	 else if(score<=79&&score>=60){
		printf("score=%d,grade:C",score);
	}
	 else if(score<=59&&score>=0){
		printf("score=%d,grade:D",score);
	}
return 0;
}

