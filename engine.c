#include<stdio.h>
int main()
{
      int temp;
	
		while(1)
		{
		  printf("\n---------- SENSOR READ----------\n");	
		printf("enter the teperature");
		scanf("%d",&temp);
		if (temp  <  100)
		{
			printf(">> STATUS: NORMAL\n");
		}
		else if(temp >= 100 && temp < 150)
		{
			printf(">> STATUS: WARING! CHECK COOLANT.\n");
		}
		else
		{
			printf(">> ALERT : CRITICAL SHUT DOWN IMMEDIATELY!:\n");
			break;
		}
	}
	printf("\nSYSTEM HALTED.\n");
	return 0;
	
}
