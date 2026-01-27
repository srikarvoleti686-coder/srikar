// CH.SC.U4AIE25054
#include<stdio.h>
int main()
{
	int arr[100],n,target,i;
	int count = 0;
	printf("enter n:");
	scanf("%d",&n);
	printf("enter %d elements:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter the numbrer to find the frequency");
	scanf("%d",&target);
	for(i=0;i<n;i++){
		if(arr[i]==target){
			count++;
		}
	}
	if(count >0 ){
	printf("The number %d appears %d times in the array.\n", target, count);
	}
	else
	{
		printf("The number %d is not present in the array.\n",target);
	}
	return 0;
}
