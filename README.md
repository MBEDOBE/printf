0x11. C - printf
--------------------------------------------------------
The first team project for the ALX-SE program

The printf function project is a project where _printf imitates the actual "printf" command located in the stdio.h library. It contains some of the basic features and functions found in the printf manual.

_printf() is a function that performs formatted output conversion and prints data. This is the prototype we are working with:
int _printf(const char *format, ...), where format contains the string that is printed. 

As _printf() is a variadic function, it can receive 'n' arguments that replace 'n' tags written inside the string. The format tags prototype is:
%[flags][length]specifier If the program runs successfully, the return value is the amount of chars printed.

## File Functions 
---------------------------------------------------------------

# _printf.c
our own function That performs formatted output conversion and print data.
_________________________________________________________________________
# main.h
Header File were All prototypes and standard library headers are Saved.
_________________________________________________________________________
# get_print_function.c
A utility function to identify the function used to print the data for different output specifier.
________________________________________________________________________

# print_str.c
A function used to Write string to standard output(Stdout).
______________________________________________________________________
# print_buffer.c
A function used to Write a buffer to standard output(Stdout).
______________________________________________________________________
# print_bin.c
A function used to Write a binary representation of unsigned integer  to standard output(Stdout).
______________________________________________________________________
# custom_str.c
prints the reversed string
_______________________________________________________________________
# man_3_printf
manual for _printf funcion
_________________________________________________________________________
# pnt_o_octal.c
function that  prints decimal in octal with leading character 'o'.
_________________________________________________________________________
# pnt_plus_int.c
function print positive desimal with plus(+) flag.
_________________________________________________________________________
# pnt_space_int.c 
function print decimal with leading space if no sign flag is specified.
_________________________________________________________________________
# pnt_upp_hex.c
function prints decimal in uppercase hexadecimal.
_________________________________________________________________________
# print_address.c
prints pointer address in hexadecimal.
_________________________________________________________________________
# print_chex.c
helper function for hexadecimal printer
________________________________________________________________________
# print_int.c
prints integer in decimal
_________________________________________________________________________
# print_octal.c
prints decimal in octal value(base 8).
_________________________________________________________________________
# print_shex.c
prints hexadecimal in lowercase.
_________________________________________________________________________
# print_unint.c
prints unsigned ineteger in decimal
