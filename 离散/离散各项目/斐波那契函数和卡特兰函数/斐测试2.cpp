#include <stdio.h>
//����쳲��������� 
// index ��ʾ�������е� index ��λ���ϵ�����ֵ
int fib(int index) {
    // ���ý����ݹ����������
    if (index == 1 || index == 2) {
        return 1;
    }
    return fib(index - 1) + fib(index - 2);
}

int main()
{	
	printf("***********쳲��������У�Fibonacci sequence��***************\n");
	printf("쳲��������У�Fibonacci sequence�����ֳƻƽ�ָ�����\n�����������ѧ�������ɶࡤ쳲�������Leonardo Fibonacci��1202�������ӷ�ֳΪ���Ӷ�����\n�����ֳ�Ϊ���������С���ָ��������һ�����У�\n\n\n\n");
    int i;
    int n;
    printf("������һ�������\n");
    scanf("%d",&n);
    // ���ǰ 10 ����
    printf("������쳲��������У�\n");
    for (i = 1; i <= n; i++) {
        printf("%d ", fib(i));
    }
    
    printf("\n\n\n\n");
    printf("##########��쳲��������н��Ӧ������##############\n");
	printf("(1)���ӷ�ֳ���⣺һ������ÿ����������һ��С����\nһ���Ժ���Է�ֳ���ٶ����ӣ�\n\n\n");
	printf("(2)���θ�������,��С�������۵����Ǵ�����ж����ַ���?\n\n\n");
	printf("(3)������̨�����⣺һ��̨���ܹ���n����һ������һ�ο�����1����Ҳ������2����\n����������n��̨���ܹ��ж���������\n\n");
	while(1)
{
	int choice;
	printf("��������������ʵ����������\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			{
			    int month;
			    int young = 1;
			    int adult = 0;
			    int total = 0;
			    printf("����������Ҫ�������·�����\n");
			    scanf("%d",&month);
			    printf("��������\t���̶���\t���ö���\t���ö���\n");
			    for(int i = 0;i < month;i++) 
				{ 
			        if(i > 0 && i % 3 == 0)
					{
						//ÿ3�������õ�����
			            adult += young;
			            young = 0;
			        }
			        total = young+adult;
			        printf("%d\t\t%d\t\t%d\t\t%d\n",i + 1,young,adult,total);
			        young = total;
	            }
	            	break;
   
			}
		case 2:
			{
				int count;
				printf("��������γ���\n");
				scanf("%d",&count);
				int total = fib(count);
				printf("2 x %d �ľ��ο����� %d �ַ������и���\n\n", count, total);
				break;	
			}
	
	    case 3:
	    	{
	    		int step;
			    printf("������������Ҫ����̨����̨������\n");
			    scanf("%d", &n);
			    int result = fib(n);
			    printf("һ����%d������\n", result);
			    break;
			}
			default:
				break;
		}
	}
    return 0;
}

