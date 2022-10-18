#include "main.h"


/**
 * _print_buffer - prints a buffer to the console
 *
 * @buf: buffer pointer
 * @n: number of bytes to be printed
 * Return: number of bytes  printed
 */

int _print_buffer(char *buf, int n)
{
	return (write(1, buf, n));
}