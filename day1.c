#include<stdio.h>
int main()
{
	int temp;
	printf("enter the temp :");
	scanf("%d",&temp);
	if(temp<100)
	{
		printf("normal");
	}
	else if(100>=temp && temp<150)
	{
		printf("WARING");
	}
	else
	{
		printf("cricual shut down immdetly");
	}
	return 0;
}
