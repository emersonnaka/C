#include <stdio.h>

int main() {

    int number, remainder;

    scanf("%d", &number);
    remainder = number % 2;

    if (remainder == 0) {
        printf("%d is even\n", number);
    } else {
        printf("%d is odd\n", number);
    }

    return 0;
}