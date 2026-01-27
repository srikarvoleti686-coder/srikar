//CH.SC.U4E25054
//AVERAGE OF ARRAY ELEMENTS
#include <stdio.h>
#include <stdlib.h>
int main() {
    int *marks;
    int n, extra, i;
    float sum = 0;
    printf("Enter initial number of students: ");
    scanf("%d", &n);
    marks = (int*)malloc(n * sizeof(int));

    printf("Enter marks for %d students:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &marks[i]);
    }
    printf("How many more students to add? ");
    scanf("%d", &extra);
    marks = (int*)realloc(marks, (n + extra) * sizeof(int));

    printf("Enter marks for the additional %d students:\n", extra);
    for (i = n; i < n + extra; i++) {
        scanf("%d", &marks[i]);
    }
    int totalStudents = n + extra;
    for (i = 0; i < totalStudents; i++) {
        sum += marks[i];
    }

    printf("Average marks: %.2f\n", sum / totalStudents);

    free(marks);
    return 0;
}