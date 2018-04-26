#include <stdio.h>

int main() {

    // Variable declatarion
    int first_int_number;
    int second_int_number, result;
    float float_number;
    float pi = 3.14;
    char character = 'c';

    // Input keyboard and output data
    printf("Insert first integer number: ");
    scanf("%d", &first_int_number);
    printf("\nInsert second integer number: ");
    scanf("%d", &second_int_number);
    printf("\nInsert a float number: ");
    scanf("%f", &float_number);

    // Arithmetic operators
    result = first_int_number + second_int_number;
    printf("Add: %d\n", result);
    result = first_int_number - second_int_number;
    printf("Sub: %d\n", result);
    result = first_int_number * second_int_number;
    printf("Mult: %d\n", result);
    result = first_int_number / second_int_number;
    printf("Div: %d\n", result);
    result = first_int_number % second_int_number;
    printf("Remainder division: %d\n", result);

    return 0;
}