#include <stdio.h>

int main() {

    int left_value, right_value, cond;
    printf("Insert left value: ");
    scanf("%d", &left_value);
    printf("Insert right value: ");
    scanf("%d", &right_value);

    cond = ((left_value < right_value) && ((left_value % 2) == 0));
    printf("%d less than %d and left_value is even number: %d\n", left_value, right_value, cond);
    cond = ((left_value <= right_value) || ((left_value % 2) != 0));
    printf("%d less than or equal %d or left_value is odd number: %d\n", left_value, right_value, cond);
    cond = !((left_value > 50) && (left_value < 100));
    printf("%d is not greater than 50 and less than 100: %d\n", left_value, cond);

    return 0;
}