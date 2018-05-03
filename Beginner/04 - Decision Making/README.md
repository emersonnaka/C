# Decision Making

There are many situations that we have to make decisions. For example, we want to know if a number is a even or odd number. Other example, if a year is a leap year. In this cases there are one or more condition that we need to know to prove if a number is a even or odd number or, if a year is a leap year. For this it's necessary to use `if`, `if... else` or `if... else if... else` instruction. Or you want to do a menu to user choose an option, you also can implement `switch` statement.

## `if` statement
`if` instruction has the following syntax:
```c
if (condition) {
    instructions;
}
```
`if... else` instruction has the following syntax:
```c
if (condition) {
    instructions;
} else {
    instructions;
}
```
`if... else if... else` instruction has the following syntax:
```c
if (condition) {
    instructions;
} else if (other_condition) {
    instructions;
} else {
    instructions;
}
```
It's possible to observe that any condition needs to be between parentheses. And as well as loops, the instructions needs to be in curly brackets, except if only **one** instruction.

So, now you can implement an algorithm to know a number is a even or odd number. Bellow follows the [even_odd_number.c](https://github.com/emersonnaka/C/blob/master/Beginner/04%20-%20Decision%20Making/even_odd_number.c) code this example:
```c
#include  <stdio.h>

int  main() {

    int number, remainder;

    scanf("%d", &number);
    remainder = number %  2;

    if (remainder  ==  0) {
        printf("%d is even\n", number);
    } else {
        printf("%d is odd\n", number);
    }

    return  0;
}
```
Even or odd number is a simple example. It isn't necessary to use logic operator. But to show how to use relational and logical operators, we have leap year example.

A year is leap if:
* year is divisible by 4 and not divisible by 100;
* **or** year is divisible by 100 and 400.
The [leap_year_1.c](https://github.com/emersonnaka/C/blob/master/Beginner/04%20-%20Decision%20Making/leap_year_1.c) code show this:
```c
#include  <stdio.h>

int  main() {
 
    int year;
    scanf("%d", &year);

    if ((year %  4  ==  0) && (year %  100  !=  0)) {
        printf("%d is leap year!\n", year);
    } else  if ((year %  100  ==  0) && (year %  400  ==  0)) {
        printf("%d is leap year!\n", year);
    } else {
        printf("%d is not leap year!\n", year);
    }

    return  0;
}
```
Above it can be noted that two conditions are implemented separately. But it's possible implement in only one condition as [leap_year_2.c](https://github.com/emersonnaka/C/blob/master/Beginner/04%20-%20Decision%20Making/leap_year_2.c):
```c
#include  <stdio.h>

int  main() {

    int year;
    scanf("%d", &year);

    if (((year %  4  ==  0) && (year %  100  !=  0)) || ((year %  100  ==  0) && (year %  400  ==  0))) {
        printf("%d is leap year!\n", year);
    } else {
        printf("%d is not leap year!\n", year);
    }
 
    return  0;
}
```

## `switch` statement
`switch` statement has the following syntax:
```c
switch (variable) {
	case 1:
		instructions;
		break;
	case 2:
		instructions;
		break;
	default:
		instructions;
		break;
}
```
The `variable` only can be integer number:
* `long`
* `int`
* `short`
* `char`
* `byte`

`case` don't compare float number.
Value of `variable` should be equal to value specified in `case`. Thus can't possible check if a variable is in a range of values, using relational operators.
`break` define end instructions for each `case`. It ensure that `instructions`' case will be executed. If you don't use it, the following instructions that other cases will be executed.
In this example [celsius_fahrenheit.c](https://github.com/emersonnaka/C/blob/master/Beginner/04%20-%20Decision%20Making/celsius_fahrenheit.c), it print a menu to user choose which temperature convert he wants to do:
```c
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
```
An important note: the compile could generate a code more efficient code.
