//CH.SC.U4AIE25054
//CONSTANT TIME
#include <stdio.h>

void constantTimeOperation(int a, int b) {
    printf("ENTER A");
    scanf("%d",&a);
      printf("ENTER B");
    scanf("%d",&b);

    int x = a + b;
    printf("Result: %d\n", x);
}

int main() {
    constantTimeOperation(10, 20);
    return 0;
}