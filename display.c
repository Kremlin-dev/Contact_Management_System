#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "cms.h"

/**
 * display_list- removes a key from hash table
 *
 *
 *Return: void
 */

void display()
{
  int i;
  for (i = 0; i < SIZE;)
  {
  //if (num[i].value != NULL)
  //{
   printf("\n %s  %s \t", num[i].key,  num[i].value);
 // }
  i++;
  }
}