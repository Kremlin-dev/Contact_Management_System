#include <stdio.h>
#include "cms.h"

/**
 * display_list- removes a key from hash table
 *
 *
 *Return: void
 */

void display_list()
{
    int i;
/*
    if (num[].key == NULL && num[].value == NULL)
    {
        printf("There are no contacts to display.\n");
    }

    else
    {
        */
        
        for (i = 0; i < SIZE ; i++)
        {
            if (num[i].key != NULL && num[i].value != NULL)
            {
                printf(" %s %s\n", num[i].key, num[i].value);
            }
            
        }
   //}
}
