// CH.SC.U4AIE25054
#include<stdio.h>
int main()
{
	int n,x,i;
	long long sum = 0;
	int current_odd=1;
	printf("enter the value of x:");
	scanf("%d",&x);
	printf("enter the number of term (n):");
	scanf("%d",&n);
	printf("/nsreies\n");
	for(i = 1; i<=n;i++)
	{
		int term = current_odd * x;
		sum+= term;
		printf("%d",term);
		if(i<n)
		{
			printf("+");
		}
		current_odd += 2;
	}
	printf("\n\nThe sum of the series is: %lld\n", sum);

    return 0;
}
