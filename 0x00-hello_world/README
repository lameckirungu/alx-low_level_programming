# Hello World, C!
This is the first project and contains solutions to the given C programming challenges. 
## Learning Objectives
- Why C programming is awesome
- Who invented C
- Who are Dennis Ritchie, Brian Kernighan and Linus Torvalds
- What happens when you type ```gcc main.c``` 
- What is an entry point
- What is ```main```
- How to print text using ```printf```, ```puts``` and ```putchar```
- How to get the size of a specific type using the unary operator ```sizeof```
- How to compile using ```gcc```
- What is the official C coding style and how to check your code with <code>[betty-style](https://github.com/alx-tools/Betty#) </code>
- How to find the right header to include in your source code when using a standard library function
- How does the ```main``` function influence the return value of the program

## Requirements
### C
- Allowed editors: `vi`, `vim`, `emacs`
- All files are compiled on Ubuntu 20.04 LTS using `gcc`, with the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- Not allowed to use `system`
- Coding standard: `betty`

### Shell Scripts
- All scripts should be exactly two lines long (`$ wc -l file` should print 2)
- All files should end with a new line
- The first line of all files should b exactly `#!/bin/bash`

# Tasks
### Preprocessor
Write a script that runs a C file through the preprocessor and save the result into another file.

The C file name will be saved in the variable `$CFILE`
The output should be saved in the file `c`
#### solution: [0-preprocessor](https://github.com/lameckirungu/alx-low_level_programming/blob/master/0x00-hello_world/0-preprocessor.sh)
```
lamiru@ubuntu:~/c/0x00$ cat main.c 
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    return (0);
}
lamiru@ubuntu:~/c/0x00$ export CFILE=main.c
lamiru@ubuntu:~/c/0x00$ ./0-preprocessor 
lamiru@ubuntu:~/c/0x00$ tail c
# 942 "/usr/include/stdio.h" 3 4

# 2 "main.c" 2


# 3 "main.c"
int main(void)
{
 return (0);
}
lamiru@ubuntu:~/c/0x00$ 
```
