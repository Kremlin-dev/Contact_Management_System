#ifndef _MAIN_H
#define _MAIN_H
#define SIZE 256

struct contact
{
    char *key;
    char *value;
};
int Hash_Fxn(char *key);
#endif
