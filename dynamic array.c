//CH.SC.4AIE25054
//DYNAMIC ARRAY IMPLEMENTATION
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i;
    printf("enter the size of array:");
    scanf("%d",&n);
    int *arr=malloc(n*sizeof(int));
    if(arr==NULL)
    {
        printf("memory allocation failed:");
        return 1;
    }
    printf("enter  %d integer value",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("the elements in the array are:");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    free(arr);
    return 0;
}