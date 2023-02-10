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
  char *key;
  i = Hash_Fxn(key);
  if (num[i].value != NULL)
    printf("\n %s  %s \t", num[i].key,  num[i].value);
  else 
    printf("Hello, we are also trying it out, hmm");



}