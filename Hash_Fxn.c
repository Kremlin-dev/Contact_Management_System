#include <stdio.h>
#include <string.h>
#include "CMS.h"
/**
  * Hash_Fxn - Computes the index of key using a function
  *@key: String as key
  *Return: Index value
  */

int Hash_Fxn( char* key) 
{
    const int p = 31;
    int hash = 0;
    long p_pow = 1;
    for(int i = 0; i < strlen(key); i++) 
	{
        hash = (hash + (key[i] - 'a' + 1) * p_pow) % SIZE;
        p_pow = (p_pow * p) % SIZE;
    }
    return (hash);
}