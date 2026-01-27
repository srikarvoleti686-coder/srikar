#include<stdio.h>
#include<stdlib.h>
int main()
{
	int s1,s2,s3;
	printf("--------------VOTER SYSTEM------------\n");
  while(1)
  {
  	printf("\n-----------NEW READING------------\n");
  
	printf("enter s1");
	scanf("%d",&s1);
	if(s1 < 0)
	{
		printf(">> SHUTDOWN COMMAND RECERIVED. STOPPING ENGINE..........\n");
		break;
	}
		printf("enter s2");
	scanf("%d",&s2);
		printf("enter s3");
	scanf("%d",&s3);
	if(abs(s1-s2 )<=5)
	{
		printf(">> STATUS: S1 AND S2 AGREE.\n");
		printf(">> DECISION: TEMP IS %d\n",(s1+s2)/2);
	}
	else if(abs(s1-s3) <= 5)
	{
		printf(" STATUS : SENSOR 2 IS BROKEN S1 AND S3 ARE AGREE.\n");
			printf(">> DECISION: TEMP IS %d\n",(s1+s3)/2);
	}
	else if (abs(s2-s3) <=5)
	{
		printf(" STATUS : SENSOR 1 IS BROKEN S2 AND S3 ARE AGREE.\n");
			printf(">> DECISION: TEMP IS %d\n",(s2+s3)/2);
	}
	else
	{
		printf(">> CRITICAL ERROR SENSORS FAILED: ENGAGING SAFE MODE");
	}
	}
return 0;
}
