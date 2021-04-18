#include <stdio.h>
#include <stdlib.h>
struct node
  {
    int data;
    struct node *next;
  };
int main()
{
   typedef struct node NODE;
   NODE *head, *first=NULL, *temp = NULL,*n;
   int count = 0,L;
   int choice = 1,data;
   while (choice) //while(Non Zero value)-----> true
    {
      head = (NODE *)malloc(sizeof(NODE));
      printf("Enter the data item\n");
      scanf("%d", &head-> data);
      if (first != NULL)
      {
        temp->next = head;
        temp = head;
      }
      else
      {
      first = temp = head;
      }
      printf("Do you want to continue(Type 0 or 1)?\n");
     scanf("%d", &choice);
   }
   temp->next = NULL;
   /* reset temp to the beginning */
   n = first;
   printf("\n status of the linked list is\n");
   while (n != NULL)
    {
     printf("%d-->", n->data);
      n = n -> next;
    }
    printf("\nEnter the location from where u want to delete a NODE\n");
    scanf("%d",&L);
    n = first;
   while (n != NULL)// to insert a new data after a given location
    {
    	count++;
        if(count==L-1)// to insert a new data after a given location
        {
          printf("\n\ndeleted element is = %d\n\n",n->next->data);
          n-> next=n-> next->next;
        }
       //printf("%d-->", n->data);
       n = n -> next;
    }
    n = first;
    printf("\n status of the linked list is\n");
    while (n != NULL)
     {
       printf("%d-->", n->data);
       n = n -> next;
     }
   printf("No. of nodes in the list = %d\n", count);
}