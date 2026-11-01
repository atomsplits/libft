_This project has been created as part of the 42 curriculum by mpankrat._


# Libft

Your very first own C library

Libft is a project from the 42 School curriculum. The goal is to recreate a collection of standard C library functions, as well as implement additional utility functions, to build a personal C library that can be reused in future projects.

This project provides a deeper understanding of C programming, memory management, pointers, strings, and linked lists.

📚 About the Project

The objective of Libft is to create a static library called libft.a containing reimplementations of several standard C library functions, along with additional functions that are not part of the standard library.

The library is written entirely in C and follows the 42 Norm.

🛠️ Functions
Part 1 — Libc Functions

Reimplementations of standard C library functions:

Character checks and conversions:
`ft_isalpha`
`ft_isdigit`
`ft_isalnum`
`ft_isascii`
`ft_isprint`
`ft_toupper`
`ft_tolower`
String manipulation:
`ft_strlen`
`ft_strlcpy`
`ft_strlcat`
`ft_strchr`
`ft_strrchr`
`ft_strncmp`
`ft_strnstr`
`ft_strdup`
Memory manipulation:
`ft_memset`
`ft_bzero`
`ft_memcpy`
`ft_memmove`
`ft_memchr`
`ft_memcmp`
Conversion:
`ft_atoi`
Memory allocation:
`ft_calloc`
Part 2 — Additional Functions

Utility functions that are not part of the standard C library:

`ft_substr`
`ft_strjoin`
`ft_strtrim`
`ft_split`
`ft_itoa`
`ft_strmapi`
`ft_striteri`
`ft_putchar_fd`
`ft_putstr_fd`
`ft_putendl_fd`
`ft_putnbr_fd`
Part 3 — Linked Lists

Functions for handling singly linked lists:

`ft_lstnew`
`ft_lstadd_front`
`ft_lstsize`
`ft_lstlast`
`ft_lstadd_back`
`ft_lstdelone`
`ft_lstclear`
`ft_lstiter`
`ft_lstmap`
⚙️ Compilation

The project uses a Makefile to compile the source files into a static library.

Clone the repository:

`bash`
`git clone <repository-url>`
`cd libft`


Compile the library:

`bash`
`make`


This generates:

`bash`
`libft.a`

Makefile Rules
Command	Description
`make`	Compiles the library
`make clean`	Removes object files
`make fclean`	Removes object files and the library
`make re`	Recompiles everything
Usage

To use Libft in another C project, include the header file and link the static library during compilation.

Example:

```c
#include "libft.h"

int main(void)
{
    char *str;

    str = ft_strdup("Hello, 42!");
    ft_putendl_fd(str, 1);
    free(str);

    return (0);
}
```


Compile your program with:

bash
cc main.c -L. -lft -I. -o program


Run it:

bash
./program

📁 Project Structure
text
libft/
│
├── Makefile
├── libft.h
│
├── ft_isalpha.c
├── ft_isdigit.c
├── ft_isalnum.c
├── ft_isascii.c
├── ft_isprint.c
├── ft_strlen.c
├── ft_memset.c
├── ft_bzero.c
├── ...

What I Learned

Through this project, I gained experience with:

C programming fundamentals.
Pointers and pointer manipulation.
Dynamic memory allocation (malloc and free).
String and memory manipulation.
Linked lists and data structures.
Creating and managing static libraries.
Writing code according to the 42 Norm.
Using Makefiles to automate compilation.
👤 Author

[Maxim Pankratov]

42 Student

GitHub: atomsplits
42 Login: mpankrat

