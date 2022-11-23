#include <stdio.h>
#include "CMS.h"

/**
  * Add_item - inserts a key to hash table
  *@key: name as string
  *@value: Contact number as string
  *Return: void
  */
//struct contact num[SIZE];
void Add_item(char *key, char *value)
 {
    int i = Hash_Fxn(key);
    if (num[i].value == 0 )
        {
            num[i].key = key;
            num[i].value = value;  
            //printf("num[%d]: %s %s ", i, num[i].key,num[i].value);
        }
        else
        {
        printf("Name Exits on the List.\n");
        
        }    

 }

