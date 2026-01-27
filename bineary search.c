//CH.SC.U4AIE25054
// BINEARY SEARCH
#include <stdio.h>
int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int n = 10, key = 7;
    int low = 0, high = n - 1;

    while(low <= high) {
        int mid = (low + high) / 2;
        if(arr[mid] == key) {
            printf("Found\n");
            break;
        }
        else if(arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return 0;
}
