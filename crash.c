#include<stdio.h>
int main()
{
	int temp;
	int j;
	int blackbox[10];
	int i =0;
	printf("------------THE CUSER DATA RECORDING STARRED----\n");
	while(i < 10)
	{
		printf("\n[READING %d] enter temperature:",i+1);
		scanf("%d" ,&temp);
		blackbox[i] = temp;
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
			i++;
			 break;
		}
		i++;
	}
	printf("\n\n------SYSTEM HALTED. GENERATING CRASH REPORT-----\n");
	printf("RECORED TEMPERATURE:");
	for( j=0; j<i; j++)
	{
		printf("%d | ",blackbox[j]);
	}
	printf("\n------------------------------\n");
	return 0;
}
