0x11. C - printf
--------------------------------------------------------
The first team project for the ALX-SE program

The printf function project is a project where _printf imitates the actual "printf" command located in the stdio.h library. It contains some of the basic features and functions found in the printf manual.

_printf() is a function that performs formatted output conversion and prints data. This is the prototype we are working with:
int _printf(const char *format, ...), where format contains the string that is printed. 

As _printf() is a variadic function, it can receive 'n' arguments that replace 'n' tags written inside the string. The format tags prototype is:
%[flags][length]specifier If the program runs successfully, the return value is the amount of chars printed.
