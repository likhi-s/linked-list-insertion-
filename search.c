#include "insertion.h"
#include "search.h"
#include <stdbool.h>

extern node *head;
extern node *temp;

void search()
{
    int choice;

    while(true)
    {
        printf("1. Create a List\n2. Display List\n3. Search By Value\n4. Search By Position\n5. Exit\n");
        printf("Enter Choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
        case CREATE_LIST:
            insertAtEnd();
            break;
        case DISPLAY_lIST:
            displayList();
            break;
        case SEARCH_BY_VALUE:
            searchByValue();
            break;
        case SEARCH_BY_POSITION:
            searchByPosition();
            break;
        case EXIT_FROM_SEARCH:
            printf("Exiting\n");
            exit(0);
            break;
        default:
            printf("Invalid choice,try again\n");
            break;
        }
    }

}

void searchByValue()
{
    if(head ==0)
    {
        printf("list is empty\n");
        return;
    }
    int searchId;
    printf("enter Id to search\n");
    scanf("%d",&searchId);
    temp = head;

    while(temp !=0)
    {
        if(searchId == temp->id)
        {
            printf("Id %d found\n",searchId);
            printf("Data in the node:\n");
            printf("ID = %d\n",temp->id);
            return;
        }
        temp = temp->next;
    }
    printf("Node with searchId %d not found\n",searchId);
}

void searchByPosition()
{
    if(head ==0)
    {
        printf("list is empty\n");
        return;
    }
    int position;
    printf("enter postion to search\n");
    scanf("%d",&position);

    if(position < 0)
    {
        printf("entered position is invalid\n");
        return;
    }
    temp= head;
    int currentPosition =0;
    while(temp != 0 && currentPosition < position)
    {
        temp =temp->next;
        currentPosition ++;
    }

    if(temp == 0)
    {
        printf("entered position is not available\n");
    }
    else
    {
        printf("position found and Data in the node:\n");
        printf("ID = %d\n",temp->id);
    }
}
