#include <stdio.h>

int cycle_length(int a) {
    int count = 1;
    while (a != 1) {
        if (a % 2 == 1) {
            a = 3*a + 1;
            count++;
        } else {
            a = a/2;
            count++;
        }
    }

    return count;
}


int main() {
    int a;
    printf("Hello 3n + 1\n");
    int lower, upper;
    while(scanf("%d %d) {
        scanf("%d %d\n", &lower, &upper);
        printf("The numbers are %d, %d\n", lower, upper);
    }
    return 0;
}
