#include <stdio.h>

int main(void) {
    int arr1[20] = {};
    int arr2[20] = {};

    int n = 0;
    scanf("%d", &n);
    for (int *p = arr1; p < n + arr1; p++) {
        scanf("%d", p);
    }
    for (int *p = (n + arr2 - 1); p >= arr2; p--) {
        scanf("%d", p);
    }

    for (int i = 0; i < n; i++) {
        printf(" %d", arr1[i] + arr2[i]);
    }
}
