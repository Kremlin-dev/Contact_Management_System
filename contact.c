#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cms.h"

#define SIZE 256

struct contact num[SIZE];

void initial(void)
{
    for (int i = 0; i < SIZE; i++)
    {
        num[i].key = NULL;
        num[i].value = NULL;
    }
}

int Hash_Fxn(char *key)
{
    const int p = 31;
    int hash = 0;
    long p_pow = 1;
    for (int i = 0; i < strlen(key); i++)
    {
        hash = (hash + (key[i] - 'a' + 1) * p_pow) % SIZE;
        p_pow = (p_pow * p) % SIZE;
    }
    return (hash);
}

void Add_item(char *key, char *value)
{
    int i = Hash_Fxn(key);
    if (num[i].value == NULL)
    {
        num[i].key = malloc(strlen(key) + 1);
        num[i].value = malloc(strlen(value) + 1);
        strcpy(num[i].key, key);
        strcpy(num[i].value, value);
        printf("Contact added successfully.\n");
    }
    else
    {
        printf("Name already exists on the list.\n");
    }
}

void Remove_Item(char *key)
{
    int i = Hash_Fxn(key);
    if (num[i].key != NULL && strcmp(num[i].key, key) == 0)
    {
        free(num[i].key);
        free(num[i].value);
        num[i].key = NULL;
        num[i].value = NULL;
        printf("Contact %s deleted successfully.\n", key);
    }
    else
    {
        printf("Contact %s does not exist.\n", key);
    }
}

void display()
{
    for (int i = 0; i < SIZE; i++)
    {
        if (num[i].value != NULL)
        {
            printf("%s %s\n", num[i].key, num[i].value);
        }
    }
}

void search_contact(char *key)
{
    int i = Hash_Fxn(key);
    if (num[i].key != NULL && strcmp(num[i].key, key) == 0)
    {
        printf("%s %s\n", num[i].key, num[i].value);
    }
    else
    {
        printf("Name does not exist in the list.\n");
    }
}
void edit_contact(char *key)
{
    int i = Hash_Fxn(key);
    if (num[i].key != NULL && strcmp(num[i].key, key) == 0)
    {
        char new_number[100];
        printf("Enter new number: ");
        scanf("%s", new_number);
        free(num[i].value);
        num[i].value = malloc(strlen(new_number) + 1);
        strcpy(num[i].value, new_number);
        printf("Contact updated successfully.\n");
    }
    else
    {
        printf("Name does not exist in the list.\n");
    }
}
