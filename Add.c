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
    int i = Hash_Fxn(key);
    if (num[i].value == NULL)
        {
            num[i].key = key;
            num[i].value = value;  
            printf("%s %s \n", num[i].key,num[i].value);
        }
        /**
        else if (num[i].key == key)
        {
             num[i].value = value;  
        }
        */
        else
        {

            printf("Name Exits on the List.\n");
        }    

 }
