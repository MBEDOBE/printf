0x11. C - printf
--------------------------------------------------------
The first team project for the ALX-SE program

The printf function project is alx school project where _printf imitates the actual "printf" command located in the stdio.h library. It contains some of the basic features and functions fond in the manual of printf.
_printf() is a function that performs formatted output conversion and print data. Its prototype is the following:
int _printf(const char *format, ...)
Where format contains the string that is printed. As _printf() is variadic function, it can receives 'n' arguments that replace by 'n' tags written inside the string.
The format tags prototype is the following:
%[flags][length]specifier If the program runs successfully, the return value is the amount of chars printed.

TASK #0
Write a function that produces output according to a format.

Prototype: int _printf(const char *format, ...);
Returns: the number of characters printed (excluding the null byte used to end output to strings)
write output to stdout, the standard output stream
format is a character string. The format string is composed of zero or more directives. See man 3 printf for more detail. You need to handle the following conversion specifiers:
c
s
%
You don’t have to reproduce the buffer handling of the C library printf function
You don’t have to handle the flag characters
You don’t have to handle field width
You don’t have to handle precision
You don’t have to handle the length modifiers

TASK #1
Handle the following conversion specifiers:

d
i
You don’t have to handle the flag characters
You don’t have to handle field width
You don’t have to handle precision
You don’t have to handle the length modifiers
