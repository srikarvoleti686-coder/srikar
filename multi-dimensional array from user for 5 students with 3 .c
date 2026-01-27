#include <stdio.h>

int main() {
    int marks[5][3];
    int i, j;
    float s, a;
    float maxaverage = -1.0;
    int topperindex = -1;

    printf("Enter marks for 5 students (3 subjects each):\n");

    for (i = 0; i < 5; i++) {
        printf("Enter marks for Student %d: ", i + 1);
        for (j = 0; j < 3; j++) {
            scanf("%d", &marks[i][j]);
        }
    }

    for (i = 0; i < 5; i++) {
        s = 0;
        
        for (j = 0; j < 3; j++) {
            s = s+marks[i][j];
        }

        a = s / 3.0;

        if (a >= maxaverage) {
            maxaverage = a;
            topperindex = i;
        }
    }

    if (topperindex != -1) {
        printf("The Topper is Student %d\n", topperindex + 1);
        printf("Highest Average Mark: %.2f\n", maxaverage);
    }

    return 0;
}
