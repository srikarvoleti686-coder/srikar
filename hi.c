#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 0; i <= n; i++)  
    {
        int b = i * i * i;    
        printf("%d\n", b);    
    }
    return 0;
}