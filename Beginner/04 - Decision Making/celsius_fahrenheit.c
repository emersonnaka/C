#include <stdio.h>

int main() {

    int input;
    float temperature;

    do{
        printf("1 - Convert Celsius to Fahrenheit\n");
        printf("2 - Convert Fahrenheit to Celsius\n");
        printf("3 - Exit\n");
        printf("Selection: ");
        scanf("%d", &input);

        switch (input) {
            case 1:
                printf("Temperature in Celsius: ");
                scanf("%f", &temperature);
                printf("%.1f ºC is tantamount to %.1f ºF\n", temperature, (temperature * 1.8) + 32);
                break;
            case 2:
                printf("Temperature in Fahrenheit: ");
                scanf("%f", &temperature);
                printf("%.1f ºF is tantamount to %.1f ºC\n", temperature, (temperature - 32) / 1.8);
                break;
            case 3:
                printf("Thank you for using it!\n");
                break;
            default:
                printf("Bad input!\n");
                break;
        }

    } while (input != 3);

    return 0;
}