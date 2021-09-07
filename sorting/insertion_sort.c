#include<stdio.h>
#include<string.h>

typedef char item_type;

void swap(item_type* a, item_type* b) {
    item_type temp;
    temp = *a;
    *a = *b;
    *b = temp;
    return;
}

void insertion_sort(item_type s[], int n) {
    int i, j; /* counters */

    for(i = 1; i < n; i++) {
        j = i;
        while((j > 0) && (s[j] < s[j-1])) {
            swap(&s[j], &s[j-1]);
            j = j-1;
        }
    }
}

int main() {

    printf("Hello Insertion sort\n");

    char s[] = "INSERTIONSORT";

    printf("Before sorting: %s\n", s);
    insertion_sort(s, strlen(s));
    printf("After sorting: %s\n", s);

    return 0;
}

