#include<stdio.h>
#include<stdlib.h>
void analyze_sensor(int s1,int s2,int s3)
{
	if(abs(s1 - s2 )<5)
	{
	printf(">> STATUS: S1 and S2 agree.\n");
        printf(">> DECISION: Temp is %d\n", (s1+s2)/2);	
	}
	else if(abs(s2 - s3) <= 5)
    {
        printf(">> STATUS: Sensor 1 is BROKEN! S2 and S3 agree.\n");
        printf(">> DECISION: Temp is %d\n", (s2+s3)/2);
    }
    	else if(abs(s1 - s3) <= 5)
    	{
    		 printf(">> STATUS: Sensor 2 is BROKEN! S1 and S3 agree.\n");
        printf(">> DECISION: Temp is %d\n", (s1+s3)/2);
		}
    else
    {
        printf(">> CRITICAL ERROR: SENSORS DISAGREE!\n");
    }
	
}
   int main()
   {
   	int s1,s2,s3;
   	printf("-------------MODULAR SYSTEM---------------\n");
   	while(1)
   	{
	   
   	printf("enter s1");
   	scanf("%d",&s1);
   	if(s1 == -1)
   	break;
   		printf("enter s2");
   	scanf("%d",&s2);
   		printf("enter s3");
   	scanf("%d",&s3);
   	analyze_sensor(s1,s2,s3);
   
   }
   	return 0;
}
