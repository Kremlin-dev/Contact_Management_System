#include <stdio.h>
#include <string.h>
#include "CMS.h"
/**
  * Hash_Fxn - Computes the index of key using a function
  *@key: String as key
  *Return: Index value
  */

int Hash_Fxn(char *key)
{
	unsigned int i, index, sum = 0;

	for (i = 0; i < strlen(key); i++)
	{
		sum = 37 + sum + key[i];
	}
	return (index = sum % SIZE);
}

