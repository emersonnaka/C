# Basic Concepts and Hello, World

In this small example, the implementation has some basic concepts:
* Library
* Main function
* Print

Usually all libraries are imported in the file header, in other words, are the first instructions of your file. When you want to use some library, you should use the `#include` instruction, e.g.:
```c
#include <stdio.h>
```
The above code snippet show how to import a library. The `stdio` library is responsible for input and output data. In this example is implemented how print a phrase.

After declare libraries, then can implement the main function. The main function has the following format:
```c
int main() {
	...
	return 0;
}
```
Always an implementation has the `main` function, this function will be executed first. She is `int` (integer) type, so it returned a integer.

Now let's print the "Hello, World" message. To do this, it's necessary to use the `printf` instruction:
```c
printf("Hello, World\n");
```
The `printf` show the message on the screen and `\n` insert a new line. If you use two `printf` consecutive and don't use `\n`, then the two sentences will be displayed on the same line.

Finally, the implementation was:
```c
#include <stdio.h>

int main() {
	printf("Hello, World!\n");
	return 0;
}
```
Note that at the end of each instruction has `;` (semicolon). If you don't insert them, it will give compilation error.
Now, it's only compile and execute this code :)

# Compile and execute

If you're using Linux, go to the file path using `cd` command and then:
```bash
$ gcc file_name.c -o executable_name
```
If your implementation is correct, an executable file `executable_name` will be created, Then use the `./executable_name` to execute your "Hello, World!" software:
```bash
$ ./executable_name
Hello, World!
```

# Curiosity
You can check if your software has run completely. After running your software, use this command to check the software return value:
```bash
$ echo $?
0
```
If it print the same value if you insert in `return` instruction, is the signal that your software has run completely.

``
