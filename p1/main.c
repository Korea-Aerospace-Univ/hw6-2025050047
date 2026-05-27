#include <stdio.h>

int main(void) {
    char arr[10] = {};

    for (int i = 0; i < 10; i++) {
        scanf("%c", arr[i]);
    }

    int maxCount = 0;
    char maxChar = '\0';

    for (char *temp = arr; temp < arr + 10; temp++) {
        int count = 0;
        
        for (char *temp2 = arr; temp2 < arr + 10; temp2++) {
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
