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

    if (num[i].key == NULL)
    {
        printf("There are no contacts to display.\n");
    }

    else
    {
        for (i = 1; i < SIZE - 1; i++)
        {
            if (num[i].key != NULL)
            {
                printf(" %s %s\n", num[i].key, num[i].value);
            }
        }
    }
}
