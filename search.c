#include <stdio.h>
#include "cms.h"

/**
 * search_contact - inserts a key to hash table
 *@key: name as string
 *
 *Return: pointer to value in list
 */

void search_contact(char *key)
{
    int i = Hash_Fxn(key);
    if (num[i].key == key)
    {
        printf("%s %s\n", num[i].key, num[i].value);
    }

    else
    {
        printf("Name does not exits in the List.\n");
    }
}
