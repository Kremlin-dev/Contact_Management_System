#include <stdio.h>
#include "cms.h"

int main (void)
{
  int Choice;
  int c = 0;
  char *name;
  char *phone_Number;
  
  printf("************************************************\n");
  do {
  printf("1. Add Contact \n");
  printf("2. Delete Contact \n");
  printf("3. Search contact\n");
  printf("4. Display contact\n");
  printf("5. Edit Contact\n");
  printf("6. Quit \n");
  printf("Enter an Operation: ", Choice);
  scanf("%d", &Choice);
 
 switch (Choice)
 {
 case 1:
 printf("Name: ");
 scanf("%s %s", &name, &phone_Number);
 ///printf("Number: ");
 //scanf("%s", &phone_Number);
Add_item(name, phone_Number);
  //Add_item("Ama", "0247785262");
 // Add_item("Yaw", "02425562553");
 // Add_item("Mark", "02412347856");
  break;

  case 2:
 // printf("Name:" );
  //scanf("%s", name);
  Remove_Item("Yaw");
  break;

  case 3:
  printf("Name:" );
  scanf("%s", name);
  search_contact("Mark");
   break;

  case 4:
  display();
  break;

 default:
  
 }
printf("Enter 1 to repeat menu: ");
scanf("%d", &c);
} while (c == 1);

return (0);
}