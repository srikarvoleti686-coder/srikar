//CH.SC.U4AIE25039
//5x5 array
#include<stdio.h>


int main() {
    int matrix[5][5];
    int r, c;
    int i, j;

    printf("Enter elements for a 5x5 matrix:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Row sum");
    for (i = 0; i < 5; i++) {
        r = 0;
        for (j = 0; j < 5; j++) {
            printf("%d\t", matrix[i][j]);
            r =r+ matrix[i][j];
        }
        printf("| Sum = %d\n", r);
    }

    
    printf("Coloumn Sum:");
    for (j = 0; j < 5; j++) {
        c = 0;
        for (i = 0; i < 5; i++) {
            c = c+ matrix[i][j];
        }
        printf("%d\t", c);
    }
    printf("\n");

    return 0;
}
