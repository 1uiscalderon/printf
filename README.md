# printf
```                
                 _________________________________________
       _________|      ___  ___     _ _  __    _    ____  |__________
       \        |      |  \ |  \     |   |\   |    |      |         /
        \       |      |_ / |  /     |   | \  |    |___   |        /
         \      | .___.|    |  \__  _|_ _|_ \_|_   |      |       /
         /      |_________________________________________|       \
       /__________)                                     (___________\
```
This project is an application of the C programming lenguage proposed by Holberton School.
_printf is an implementation of the C programming function 'printf'.
## Examples

**Character**
* Input: 
```
_printf("The letter is %c\n", 'A');
```
* Output: 
```
The letter is A
```

**Integer**
* Input: 
```
_printf("This is the number %i  \n", 13);
```
* Output:
```
This is the number 13
```

**String**
* Input: 
```
_printf("%s\n", 'This is a string.');
```
- Output: 
```
This is a string.
```

## Authorized functions and macros

-    write (man 2 write)
-   malloc (man 3 malloc)
-   free (man 3 free)
-   va_start (man 3 va_start)
-   va_end (man 3 va_end)
-   va_copy (man 3 va_copy)
-   va_arg (man 3 va_arg)


# Content Table
| Functions | Description |
| --------- | ----------- |
| holberton.h | contain prototypes, libraries and a basic function used |
| print_num.c | function used to print integers |
| main.c | contain all the values to test the functions |
| _putchar | function used to print a letter |
| char_functions | Fuctions used to print characters, strings and '%' |
| _printf.c | contain the selecting the matching character from the structure and list characters or parameters |
| man_3_printf | manual about how the program work |

# How to download the files and use 
you need to have all the files in your machine and compile the files with the flags:
### Download
```
git clone https://github.com/luiscarvil/binary_trees.git
```

### Compilation

  Your code will be compiled this way:
```
gcc -Wall -Werror -Wextra -pedantic *.c
```


# Authors

-    Luis Miguel Calderon - https://www.linkedin.com/in/luis-miguel-calderon/
-   Luis Alejandro Carvajal - https://www.linkedin.com/in/luiscarvajalv/
