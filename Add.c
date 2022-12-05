#include <stdio.h>
#include "cms.h"

/**
 * Add_item - inserts a key to hash table
 *@key: name as string
 *@value: Contact number as string
 *Return: void
 */

void Add_item(char *key, char *value)
{
    int i = Hash_Fxn(key);
    if (num[i].value == NULL)
    {
        num[i].key = key;
        num[i].value = value;
        printf("Contact Added Succesfully.\n");
    }

    else
    {

        printf("Name Exits on the List.\n");
    }
}
