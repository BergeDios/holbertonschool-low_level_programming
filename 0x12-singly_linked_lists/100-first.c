#include "lists.h"
/**
 * beforemain - execute before main
 * Return: void
 */
void beforemain(void) __attribute__((constructor));
void beforemain(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
