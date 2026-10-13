# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    README.md                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tasnimo <tasnimo@student.42berlin.de>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/13 18:58:39 by tasnimo           #+#    #+#              #
#    Updated: 2026/05/13 19:39:13 by tasnimo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

*This project has been created as part of the 42 curriculum by tamakhlo*

## Description
-----
Libft is the first project at 42 Berlin. The idea is to recreate some standard C library functions from scratch and build a small library I can reuse later in the cursus.

The final result is a static library called `libft.a`.

## Instructions
-----
To compile the library:
```bash
make
--------
To clean object files:
```bash
make clean
--------
To remove everything:
```bash
make fclean
--------
To rebuild from scratch:
```bash
make re
--------
To use it in another project:
```bash
cc main.c -L. -lft -o program


## Resources
-----
- `man` pages for each function
- 42 Berlin subject PDF
- Google search

## Library Description
------
Part 1 --> Libc functions
| Function | Description |
|----------|-------------|
| ft_isalpha | checks if character is alphabetic 
| ft_isdigit | checks if character is a digit 
| ft_isalnum | checks if character is alphanumeric 
| ft_isascii | checks if character is ASCII 
| ft_isprint | checks if character is printable 
| ft_strlen | returns length of a string 
| ft_memset | fills memory with a constant byte 
| ft_bzero | fills memory with zeros 
| ft_memcpy | copies memory area 
| ft_memmove | copies memory area safely 
| ft_strlcpy | copies string with size limit 
| ft_strlcat | concatenates string with size limit 
| ft_toupper | converts char to uppercase 
| ft_tolower | converts char to lowercase 
| ft_strchr | finds first occurrence of char in string 
| ft_strrchr | finds last occurrence of char in string 
| ft_strncmp | compares two strings up to n bytes 
| ft_memchr | finds char in memory 
| ft_memcmp | compares two memory areas 
| ft_strnstr | finds substring in string 
| ft_atoi | converts string to integer 
| ft_calloc | allocates zeroed memory 
| ft_strdup | duplicates a string 

Part 2 --> Additional functions
| Function | Description |
|----------|-------------|
| ft_substr | extracts substring from string 
| ft_strjoin | joins two strings 
| ft_strtrim | trims characters from string ends 
| ft_split | splits string by delimiter 
| ft_itoa | converts integer to string 
| ft_strmapi | applies function to each char 
| ft_striteri | applies function to each char by index 
| ft_putchar_fd | outputs char to file descriptor 
| ft_putstr_fd | outputs string to file descriptor 
| ft_putendl_fd | outputs string + newline to fd 
| ft_putnbr_fd | outputs integer to file descriptor 

Part 3 --> Linked list
| Function | Description |
|----------|-------------|
| ft_lstnew | creates new list node 
| ft_lstadd_front | adds node at beginning of list 
| ft_lstsize | counts nodes in list 
| ft_lstlast | returns last node 
| ft_lstadd_back | adds node at end of list 
| ft_lstdelone | deletes one node 
| ft_lstclear | deletes entire list 
| ft_lstiter | iterates through list 
| ft_lstmap | creates new list from applying function 
