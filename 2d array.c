//CH.SC.U4AIE25054
// Write a C program to Insert and Display an element in Array 2D
#include <stdio.h>

int main() {
    int matrix[10][10];
    int r, c, i, j;
    int e, rP, cP;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nInitial Matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\nEnter the new element to insert: ");
    scanf("%d", &e);

    printf("Enter the row index (0 to %d) and column index (0 to %d): ", r- 1, c - 1);
    scanf("%d %d", &rP, &cP);

    if (rP >= 0 && rP < r && cP >= 0 && cP < c) {
        matrix[rP][cP] = e; 

        printf("\nMatrix after insertion:\n");
        for (i = 0; i < r; i++) {
            for (j = 0; j < c; j++) {
                printf("%d\t", matrix[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("Invalid coordinates!\n");
    }

    return 0;
}
