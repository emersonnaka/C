# Decision Making

There are many situations that we have to make decisions. For example, we want to know if a number is a even or odd number. Other example, if a year is a leap year. In this cases there are one or more condition that we need to know to prove if a number is a even or odd number or, if a year is a leap year. For this it's necessary to use `if`, `if... else` or `if... else if... else` instruction.

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
