0x11. C - printf
--------------------------------------------------------
The first team project for the ALX-SE program

The printf function project is alx school project where _printf imitates the actual "printf" command located in the stdio.h library. It contains some of the basic features and functions fond in the manual of printf.

_printf() is a function that performs formatted output conversion and print data. Its prototype is the following:
int _printf(const char *format, ...), where format contains the string that is printed. 

As _printf() is variadic function, it can receives 'n' arguments that replace by 'n' tags written inside the string. The format tags prototype is the following:
%[flags][length]specifier If the program runs successfully, the return value is the amount of chars printed.
