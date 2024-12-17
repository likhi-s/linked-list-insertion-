#include <stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include "insertion.h"
#include "deletion.h"

node *head;
node *temp, *newnode, *prev;
void deletionMenu()
{
    int choice;

    while(true)
    {
        printf("Enter choice\n");
        printf("1. Create a List\n2. Display List\n3. Delete from Beginning\n4. Delete from End\n5. Delete from Specific Position\n6. Delete specific node by Value\n7. Exit\n");

        scanf("%d",&choice);
        switch(choice)
        {
        case CREATE_LIST:
            insertAtEnd();
            break;
        case DISPLAY_lIST:
            displayList();
            break;
        case DELETE_FROM_BEGINNING:
            deletefrombeginning();
            break;
        case DELETE_FROM_END:
            deletefromEnd();
            break;
        case DELETE_FROM_SPECIFIC_LOCATION:
            deletefromSpecificPosition();
            break;
        case DELETE_SPECIFIC_NODE_BY_VALUE:
            deleteSpecificNodeByValue();
            break;
        case EXIT:
            printf("Exiting\n");
            exit(0);
            break;
        default:
            printf("Invalid choice,try again\n");
            break;
        }
    }
}


void deletefrombeginning()
{
    if (head == NULL)
    {
        printf("list is empty\n");
        return 0;
    }
    temp = head;
    head = temp->next;
    free(temp);
    printf("sucessfully deleted 1st node\n");
}

void deletefromEnd()
{
    if (head == NULL)
    {
        printf("list is empty\n");
        return 0;
    }
    temp = head;
    prev = NULL;
    while(temp->next!= NULL)
    {
        prev = temp;
        temp = temp->next;
    }
    prev->next  = NULL;
    free(temp);
    printf("deleted last node successfully\n");
}

void deletefromSpecificPosition()
{
    if (head == NULL)
    {
        printf("list is empty\n");
        return 0;
    }
    temp = head;
    prev = NULL;

    int position;
    printf("Enter position to insert\n");
    scanf("%d",&position);

    if(position<0)
    {
        printf("entered position is not available\n");
        return;
    }
    else if(position ==0)
    {
        printf("deleting first node\n");
        head = temp->next;
        free(temp);
    }
    else
    {
        for(int i=0;i<position;i++)
        {
            if(temp!=NULL)
            {
                prev = temp;
                temp = temp->next;
            }
        }
        if(temp == NULL)
        {
            printf("position is not available\n");
            return;
        }
        prev->next =temp->next;
        free(temp);
    }

}

void deleteSpecificNodeByValue()
{

    int deleteId;
    printf("enter ID to delete Node\n");
    scanf("%d",&deleteId);
    if (head == NULL)
    {
        printf("list is empty\n");
        return 0;
    }

    temp = head;
    prev = NULL;
    if (temp->id == deleteId)
    {
        head = temp->next;
        free(temp);
        printf("node with Id %d deleted successfully\n\n", deleteId);
        return;
    }


    while(temp != NULL && deleteId != temp->id)
    {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL)
    {
        printf("Node with ID %d not found\n", deleteId);
        return;
    }
        prev->next = temp->next;
        free(temp);
        printf("node with Id %d deleted successfully\n",deleteId);

}

