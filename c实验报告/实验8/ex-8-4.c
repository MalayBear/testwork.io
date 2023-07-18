#include<stdio.h>
struct date{
		int month;
		int day;
		int year;
};
int arr[12]={31,28,31,30,31,30,31,31,30,31,30,31};
int main()
{	int i;
	int sum=0;
	struct date today={11,10,2016};
	printf("Today's date is %i-%i-%i.\n",
	today.year,today.month,today.day);
	for(i=0;i<today.month-1;i++)
	{
		sum+=arr[i];	
	
	if(((today.year%4==0&&today.year%100!=0)||(today.year%400==0))&&(today.month>=2))
		{
			sum=sum+1;
		}
	}
		printf("this day is the %dth day of the year\n",sum);

	
	
return 0;
}

