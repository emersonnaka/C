#include <stdio.h>

int main() {

    int i;

    do {
        scanf("%d", &i);
        printf("Value: %d", i);
    } while (i != 10);

    return 0;
}