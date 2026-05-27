#include <stdio.h>

int main(void) {
    char arr[10] = {};
    char *p = arr;

    for (int i = 0; i < 10; i++) {
        scanf("%c", p + i);
    }

    char *p2 = arr;

    int maxCount = 0;
    char maxChar = ' ';

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            int count = 1;
            if (i != j && *(p + i) == *(p + j)) {
                count++;
            }
            if (maxCount < count) {
                maxChar = *(p + i);
                maxCount = count;
            }
        }
    }
    printf("%c %d", maxChar, maxCount);
}
