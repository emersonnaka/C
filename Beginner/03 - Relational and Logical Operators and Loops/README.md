# Relational Operators and Loops
To know relational and logical operators are important to check the loop condition loop. Basically, relational operator compare two variables: less than, less than or equal, equal, not equal, greater than or equal and, greater than. In loops conditions, you can use a relational sentence to it continue executing.

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
