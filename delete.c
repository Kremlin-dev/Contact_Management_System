#include <stdio.h>
#include "CMS.h"

/**
  * Remove_Item - removes a key from hash table
  *@key: name as string
  *
  *Return: void
  */

void Remove_Item(char *key)
{
    int i =  Hash_Fxn(key);

    if (num[i].key == key)
    {
        num[i].key = NULL;
		num[i].value = NULL;
        printf("Contact: %s deleted successfully.\n", key);
    }
    else
    {
        printf("Contact: %s does not exist.\n", key);
    }

}