*This project has been created as part of the 42 curriculum by iscarval.*

# Libft

## Description
Libft is the first project of the 42 curriculum. Its objective is to recreate a collection of standard C library functions and develop additional utility functions that can be reused throughout future projects.

By implementing these functions from scratch, the project provides a deeper understanding of fundamental programming concepts such as pointers, memory management, string manipulation, recursion, and data structures.

The resulting library is compiled into a static archive (libft.a) and can be linked to future C projects.

## Detailed Library Description
Libft is a custom static library written in C that provides a set of reusable functions commonly required during software development.

The library includes:

- Character classification functions used to validate input data.
- Character conversion functions.
- Memory manipulation functions for copying, comparing, searching, allocating, and initializing memory regions.
- String manipulation functions for searching, copying, trimming, joining, splitting, and transforming strings.
- Conversion functions for transforming data between different representations.
- File descriptor output functions for writing characters, strings, and numbers.
- Linked list utilities for creating, traversing, modifying, and destroying singly linked lists.

The project reproduces the behavior of several standard C library functions while introducing additional utilities frequently needed in later projects of the 42 curriculum. The library promotes code reuse, modularity, and a better understanding of low-level programming concepts.

## Library Overview

### Part 1 - Libc Functions

#### Character Classification

- **ft_isalpha** - Checks whether a character is alphabetic.
- **ft_isdigit** - Checks whether a character is a decimal digit.
- **ft_isalnum** - Checks whether a character is alphanumeric.
- **ft_isascii** - Checks whether a character belongs to the ASCII table.
- **ft_isprint** - Checks whether a character is printable.

#### Character Conversion

- **ft_toupper** - Converts a lowercase letter to uppercase.
- **ft_tolower** - Converts an uppercase letter to lowercase.

#### Memory Manipulation

- **ft_memset** - Fills a memory area with a specified byte.
- **ft_bzero** - Sets a memory area to zero.
- **ft_memcpy** - Copies memory from one location to another.
- **ft_memmove** - Copies memory safely, handling overlapping regions.
- **ft_memchr** - Searches for a byte in a memory block.
- **ft_memcmp** - Compares two memory blocks.
- **ft_calloc** - Allocates and initializes memory with zeros.

#### String Manipulation

- **ft_strlen** - Returns the length of a string.
- **ft_strlcpy** - Copies a string with size protection.
- **ft_strlcat** - Concatenates strings with size protection.
- **ft_strchr** - Finds the first occurrence of a character in a string.
- **ft_strrchr** - Finds the last occurrence of a character in a string.
- **ft_strncmp** - Compares two strings up to a given length.
- **ft_strnstr** - Locates a substring within a limited portion of a string.
- **ft_strdup** - Creates a duplicate of a string.

#### Conversion

- **ft_atoi** - Converts a string into an integer.

### Part 2 - Additional Functions

- **ft_substr** - Creates a substring from a given string.
- **ft_strjoin** - Concatenates two strings into a new one.
- **ft_strtrim** - Removes specified characters from the beginning and end of a string.
- **ft_split** - Splits a string into an array using a delimiter.
- **ft_itoa** - Converts an integer into a string.
- **ft_strmapi** - Creates a new string by applying a function to each character.
- **ft_striteri** - Applies a function directly to each character of a string.
- **ft_putchar_fd** - Writes a character to a file descriptor.
- **ft_putstr_fd** - Writes a string to a file descriptor.
- **ft_putendl_fd** - Writes a string followed by a newline to a file descriptor.
- **ft_putnbr_fd** - Writes an integer to a file descriptor.

### Part 3 - Linked Lists

- **ft_lstnew** - Creates a new linked list node.
- **ft_lstadd_front** - Adds a node at the beginning of a list.
- **ft_lstsize** - Counts the number of nodes in a list.
- **ft_lstlast** - Returns the last node of a list.
- **ft_lstadd_back** - Adds a node at the end of a list.
- **ft_lstdelone** - Deletes a single node and its content.
- **ft_lstclear** - Deletes and frees an entire list.
- **ft_lstiter** - Applies a function to every node in a list.
- **ft_lstmap** - Creates a new list by applying a function to each node.

## Instructions

### Compilation

*Compile the library:*
```bash
make
```

*Remove object files:*
```bash
make clean
```

*Remove object files and the library:*
```bash
make fclean
```

*Recompile everything:*
```bash
make re
```

**Using the Library**

*Include the header file:*
```c
#include "libft.h"
...
```

*Compile your project with the library:*
```bash
cc main.c libft.a
```
Example:
```c
#include "libft.h"

int main(void)
{
	ft_putstr_fd("Hello, Libft!\n", 1);
	return (0);
}
...
```

## Resources

### Documentation

Linux Manual Pages (man)
42 Intranet Documentation
GNU C Library Documentation

### Online References

Beej's Guide to C Programming
GeeksforGeeks C Programming Articles
Learn C

### Video Tutorials

The following video tutorials were used as complementary learning resources during the development of this project:

* https://www.youtube.com/watch?v=RXzp5SZoOuI
* https://www.youtube.com/watch?v=U6IfLZOh6Sc
* https://www.youtube.com/watch?v=Vi4U8JwxKHg
* https://www.youtube.com/watch?v=bqw-GebrvEU
* https://www.youtube.com/watch?v=ZhYiNrI2OLU
* https://www.youtube.com/watch?v=waeRImFpzsA
* https://www.youtube.com/watch?v=qs6qW4aDIaE
* https://www.youtube.com/watch?v=G2tBINHlVes
* https://www.youtube.com/watch?v=59Ko7L3-WbI
* https://www.youtube.com/watch?v=yjxwP8aqlPI
* https://www.youtube.com/watch?v=DneLxrPmmsw
* https://www.youtube.com/watch?v=N6dOwBde7-M

## AI Usage

ChatGPT was used as a supplementary learning resource during the development of this project. It was primarily used to clarify programming concepts, review implementation logic, and better understand topics such as pointers, memory management, linked lists, and recursion.

All functions were implemented, tested, and debugged by the author in accordance with the project requirements and the Norm.

## Learning Outcomes

## Learning Outcomes

Through this project, I developed a stronger understanding of:

- Pointers and memory addresses.
- Dynamic memory allocation.
- String manipulation.
- File descriptors.
- Recursion.
- Linked lists.
- Static libraries.
- Makefiles.
- Memory leak prevention.
- Modular programming in C.

Libft serves as the foundation library that will be reused throughout future projects in the 42 curriculum.


## Final Notes

Libft was successfully developed following the project requirements and the 42 Norm. The library will be reused as a foundation for future projects throughout the curriculum.