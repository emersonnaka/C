# Relational and Logical Operators and Loops
To know relational and logical operators are important to check the loop condition loop. Basically, relational operator compare two variables: less than, less than or equal, equal, not equal, greater than or equal and, greater than. And logical operators check the negation of a sentence or two or more sentences with AND and OR operators. In loops conditions, you can use a relational or logical sentence to it continue executing.

## Relational Operators
Relational operators are used to compare variables. It compare the left side with right side. These comparisons has the following syntax:
`left_value relational_operator right_value`
The relational operators are: less than `<`, less than or equal `<=`, equal `==`, not equal `!=`, greater than or equal `>=` and, greater than `>`. The code below,  [relational_operators.c](https://github.com/emersonnaka/C/blob/master/Beginner/03%20-%20Relational%20Operators%20and%20Loops/relational_operators.c), show the comparison of two variables that are initialized before with user input.
```c
#include  <stdio.h>

int  main() {
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

    return  0;
}
```
If you execute this code, you may observe that comparison argument (third `%d`) in each print only print 0 or 1. It occur because there isn't boolean type in C. For this, the programming language considers:
* 0 equal false
* 1 equal true

## Logical Operators
Logical operators are used to connect two or more sentences or deny a sentence. A sentece can be a variable or relational comparison.
To check the negation of a sentence with de not operator `!` or two or more sentences with and `&&` and or `||` operator. To deny a sentence had following sintax:
`!(sentence)`
To connect two or more sentences with AND and OR operators had:
`(left_value > 0) && (left_value < 100)`
`(left_value > 0) || (left_value < 100)`
The code below, [logical_operators.c](https://github.com/emersonnaka/C/blob/master/Beginner/03%20-%20Relational%20and%20Logical%20Operators%20and%20Loops/logical_operators.c), implemented used theses logical operators:
```c
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
```

## Loops
Loops are used when it necessary to execute some commands many times while a condition is true. In C, we have many ways to do a loop: `for`, `while` and `do while`

### for
The `for` instruction has 4 pieces: initialization, condition, change in the variable used in condition and instructions to be executed:
```c
for (initialization; condition; variable_change) {
    instructions;
}
```
Note initialization, conditions and change in the variable are separated by semicolons.
* `Initialization`: assign a value to a variable;
* `condition`: stop condition. For will be executed while this condition is true;
* `variable_change`: change of the variable used in condition
In this example [for.c](https://github.com/emersonnaka/C/blob/master/Beginner/03%20-%20Relational%20and%20Logical%20Operators%20and%20Loops/for.c), print `i` variable to understand how `for` works:
```c
#include  <stdio.h>

int  main() {

    int i;

    for (i =  0; i <  10; i++) {
        printf("%d\n", i);
    }

    return  0;
}
```
The first step is the variable initialization, but it can't create a variable. Therefore the variable is created before. In this code, `i` initialized with 0. The condition to `for` be executed is while `i` less than 10. And increment `i` in 1 to each time the `for`  is executed.
When this code is executed, had this output:
```bash
$ gcc for.c -o for
$ ./for
0
1
2
3
4
5
6
7
8
9
```
