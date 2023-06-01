#include <stdio.h>

void front(void)__attribute__((constructor));

/**
  *front - prints a sentence before the main
  *function is executed
  */
void front(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
