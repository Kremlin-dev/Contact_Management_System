#include "CMS.h"
#include <stdio.h>

/**
  * initial - sets elements at index i to 0
  *
  *Return: void
  */
struct contact num[SIZE];
void initial(void)
{
	int i;

	for (i = 0; i < SIZE; i++)
	{
		num[i].key = NULL;
		num[i].value = NULL;
	}
	
}
