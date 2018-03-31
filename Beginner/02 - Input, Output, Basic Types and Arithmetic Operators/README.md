# Variable Declaration, Input, Arithmetic Operators and Output

This example show how to declare a variable, input data from keyboard, output data according to the variable type and arithmetic operators.

## Variable declaration
In C, there are many number types, but this code use two types: integer and float numbers. Variable declaration has the following syntax:
```c
data_type variable_name;
```
* `data_type`: variable type `variable_name`.  If you want to create a variable of integer type, so use `int`. But if you want a variable of float type, then use `float`
* `variable_name`: how you wish to name your variable. It's personal.

Now, you create some variables as it's in the code below:
```c
int first_int_number;
int second_int_number, result;
float float_number;
float pi = 3.14;
```
In that code snippet there are two observations:
1. It's possible declare more than one variable in the same line. Note declaration of variables `second_int_number` and `result` 
2. It's possible to declare a variable assigning your value how the `pi` variable declare

## Input
If you want the user inserts any data, is needed to use the `scanf` function. This function is in the `stdio` library.
To each data type, is necessary to use different parameters. When variable is `int` type, use `%d`. But variable is `float` type, use `%f`. The code below show it:
```c
printf("Insert first integer number: ");
scanf("%d", &first_int_number);
printf("\nInsert second integer number: ");
scanf("%d", &second_int_number);
printf("\nInsert a float number: ");
scanf("%f", &float_number);
```
The prints are only to inform the user which variable he is inserting a number.
Observe that, the first parameter is variable type and second parameter is variable memory address. It's necessary to pass the memory address so that the compiler insert user value in variable memory address, so the variable starts to have the value. 

## Arithmetic operators
There are operators to add `+`, subtract `-`, multiply `*`, divide `/` and remainder division `%`. The following code shows it:
```c
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
```
