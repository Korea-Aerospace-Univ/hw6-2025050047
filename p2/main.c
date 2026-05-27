#include <stdio.h>

int main(void) {
    int arr1[20] = {};
    int arr2[20] = {};
    int *p = arr1;
    int *p2 = arr2;

    int n = 0;
    scanf("%d", &n);
    for (int *i = p; i < n + p; i++) {
        scanf("%d", i);
    }
    for (int *i = (n + p2 - 1); i >= p2; i--) {
        scanf("%d", i);
    }

    for (int i = 0; i < n; i++) {
        printf(" %d", *(p + i) + *(p2 + i));
    }
}
