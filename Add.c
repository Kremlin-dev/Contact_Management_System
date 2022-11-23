#include <stdio.h>
#include "CMS.h"

/**
  * Add_item - inserts a key to hash table
  *@key: name as string
  *@value: Contact number as string
  *Return: void
  */

void Add_item(char *key, char *value)
{
	struct contact num[SIZE];
	 int i;

	 i = Hash_Fxn(key);
	 if (num[i].value == 0)
	 {
		 num[i].key = key;
		 num[i].value = value;
		 printf("%s %s\n", num[i].key,num[i].value);

	 }
	 else
	 {
		  printf("Name Already exits\n");
	 }

}

