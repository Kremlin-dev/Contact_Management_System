#ifndef CONTACT_H
#define CONTACT_H

struct contact
{
    char *key;
    char *value;
};

void initial(void);
int Hash_Fxn(char *key);
void Add_item(char *key, char *value);
void Remove_Item(char *key);
void display();
void search_contact(char *key);
void edit_contact(char *key);

#endif
