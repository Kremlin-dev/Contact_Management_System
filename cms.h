#ifndef _MAIN_H
#define _MAIN_H
#define SIZE 256
struct contact
{
    char *key;
    char *value;
};
extern struct contact num[SIZE];
int Hash_Fxn(char *key);
void initial(void);
void Add_item(char *key, char *value);
void Remove_Item(char *key);
void display_list();
void search_contact(char *key);
#endif
