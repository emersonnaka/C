#include <stdio.h>

int main() {

    int left_value, right_value;
    printf("Insert left value: ");
    scanf("%d", &left_value);
    printf("Insert right value: ");
    scanf("%d", &right_value);

    printf("%d less than %d: %d\n", left_value, right_value, left_value < right_value);
    printf("%d less than or equal %d: %d\n", left_value, right_value, left_value <= right_value);
    printf("%d equal %d: %d\n", left_value, right_value, left_value == right_value);
    printf("%d not equal %d: %d\n", left_value, right_value, left_value != right_value);
    printf("%d greater than or equal %d: %d\n", left_value, right_value, left_value >= right_value);
    printf("%d greater than %d: %d\n", left_value, right_value, left_value > right_value);

    return 0;
}