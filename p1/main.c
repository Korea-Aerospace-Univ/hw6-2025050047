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

    for (char *temp = p; temp < p + 10; temp++) {
        int count = 0;
        
        for (char *temp2 = p2; temp2 < p2 + 10; temp2++) {
            if (*temp == *temp2) {
                count++;
            }
        }
        if (maxCount < count) {
            maxChar = *temp;
            maxCount = count;
        }
    }
    printf("%c %d", maxChar, maxCount);
}
