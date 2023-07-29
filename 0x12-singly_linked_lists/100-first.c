#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
  *print_first - print a text befor the execution of the main
  *it takes no parameter
  *Return: nothing
  */
void print_first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
void print_first(void)__attribute__ ((constructor));
