//CH.SC.U4E25054
//PRINTING ONLY THE 4TH ELEMENT
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *arr;
    arr = (int*)malloc(10 * sizeof(int));
    
    if(arr == NULL)
    {
        printf("Memory allocation failed");
        return 1;
    }
    int values[] = {1, 23, 56, 89, 9, 45, 75, 57, 35, 90};
    for(int i = 0; i < 10; i++) {
        arr[i] = values[i];
    }
    printf("The 4th element is: %d\n", arr[3]);
    free(arr);
    arr = NULL;
    
    return 0;
}