//CH.SC.U4AIE25054
#include <stdio.h>

int main() {
    int n;
    int i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for ( i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int smallest = arr[0];

    for ( i = 1; i < n; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    printf("Smallest element is: %d\n", smallest);

    return 0;
}

