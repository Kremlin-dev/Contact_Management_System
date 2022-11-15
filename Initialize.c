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
		num[i].key = 0;
		num[i].value = 0;
	}
	printf("%s\n %s\n", num[1].key, num[255].value);
}
