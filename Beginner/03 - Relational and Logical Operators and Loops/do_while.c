#include <stdio.h>

int main() {

    int i;

    do {
        scanf("%d", &i);
        printf("Value: %d\n", i);
    } while ((i % 2) == 0);

    return 0;
}