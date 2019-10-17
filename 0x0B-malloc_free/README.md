# 0x0B. C - malloc, free

Foundations - Low-level programming & Algorithm ― Hatching out
by Julien Barbier, co-founder at Holberton School

* What is the difference between automatic and dynamic allocation
* What is malloc and free and how to use them
* Why and when use malloc
* How to use valgrind to check for memory leak

## Getting Started

* Allowed editors: vi, vim, emacs
* All your files will be compiled on Ubuntu 14.04 LTS
* Your programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
* All your files should end with a new line
* A README.md file, at the root of the folder of the project is mandatory
* Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
* You are not allowed to use global variables
* No more than 5 functions per file
* You are not allowed to use the standard library. Any use of functions like printf, puts, etc… is forbidden
* You are allowed to use _putchar
* You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
* In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
* The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called holberton.h
* Don’t forget to push your header file

### Workshop Development

### [0. Float like a butterfly, sting like a bee](./0-create_array.c)
* Write a function that creates an array of chars, and initializes it with a specific char.
```
Give Examples
```

### [1. The woman who has no imagination has no wings](./1-strdup.c)
* Write a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.
```
Give Examples
```

### [2. He who is not courageous enough to take risks will accomplish nothing in life](./2-str_concat.c)
* Write a function that concatenates two strings.
```
Give examples
```

### [3. If you even dream of beating me you'd better wake up and apologize](./3-alloc_grid.c)
* Write a function that returns a pointer to a 2 dimensional array of integers.
```
Give examples
```

### [4. It's not bragging if you can back it up](./4-free_grid.c)
* Write a function that frees a 2 dimensional grid previously created by your alloc_grid function.
```
Give examples
```

### [5. It isn't the mountains ahead to climb that wear you out; it's the pebble in your shoe](./5-argstostr.c)
* Write a function that concatenates all the arguments of your program.
* Prototype: char \*argstostr(int ac, char **av);
* Returns NULL if ac == 0 or av == NULL
* Returns a pointer to a new string, or NULL if it fails
* Each argument should be followed by a \n in the new string

```
julien@ubuntu:~/0x0a. malloc, free$ cat 5-main.c
#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(int ac, char *av[])
{
    char *s;

    s = argstostr(ac, av);
    if (s == NULL)
    {
        return (1);
    }
    printf("%s", s);
    free(s);
    return (0);
}
julien@ubuntu:~/0x0a. malloc, free$ gcc -Wall -pedantic -Werror -Wextra 5-main.c 5-argstostr.c -o args
julien@ubuntu:~/0x0a. malloc, free$ ./args I will "show you" how great I am
./args
I
will
show you
how
great
I
am
julien@ubuntu:~/0x0a. malloc, free$
```

## Authors

* **Camilo Bayona** - *Initial work* - [cbayonao](https://github.com/cbayonao)

## Acknowledgments

* Follow the framework
* Hat tip to anyone whose code was used
* Inspiration
* etc
