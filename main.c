#include <stdio.h>
#include <stdlib.h>
#include "cms.h"

int main(void)
{
    int Choice;
    int c = 0;
    char name[100];
    char phone_Number[100];

    initial();

    printf("************************************************\n");

    do
    {
        printf("1. Add Contact\n");
        printf("2. Delete Contact\n");
        printf("3. Search contact\n");
        printf("4. Display contact\n");
        printf("5. Edit Contact\n");
        printf("6. Quit\n");
        printf("Enter an Operation: ");
        scanf("%d", &Choice);

        switch (Choice)
        {
        case 1:
            printf("Name: ");
            scanf("%s", name);
            printf("Number: ");
            scanf("%s", phone_Number);
            Add_item(name, phone_Number);
            break;

        case 2:
            printf("Name: ");
            scanf("%s", name);
            Remove_Item(name);
            break;

        case 3:
            printf("Name: ");
            scanf("%s", name);
            search_contact(name);
            break;

        case 4:
            display();
            break;
        case 5:
            printf("Name: ");
            scanf("%s", name);
            edit_contact(name);
            break;

        default:
            printf("Invalid choice.\n");
        }

        printf("Enter 1 to repeat menu: ");
        scanf("%d", &c);
    } while (c == 1);

    return (0);
}
