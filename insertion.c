#include <stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include "insertion.h"

node *head = NULL;
node *temp, *newnode;
void insertionMenu()
{
    int choice;

    while(true)
    {
        printf("Enter choice\n");
        printf("1. Create a List\n2. Display List\n3. Insert at Beginning\n4. Insert at End\n5. Insert at Specific Position\n6. Insert after a specific position\n7. Exit\n");

        scanf("%d",&choice);
        switch(choice)
        {
        case CREATE_LIST:
            insertAtEnd();
            break;
        case DISPLAY_lIST:
            displayList();
            break;
        case INSERT_AT_BEGINNING:
            insertAtBeginning();
            break;
        case INSERT_AT_END:
            insertAtEnd();
            break;
        case INSERT_AT_SPECIFIC_LOCATION:
            insertAtSpecificPosition();
            break;
        case INSERT_AFTER_SPECIFIC_LOCATION:
            insertAfterSpecificPosition();
            break;
        case EXIT:
            printf("Exiting\n");
            exit(0);
            break;
        default:
            printf("Invalid choice,try again\n");
        }
    }
}


void displayList()
{
    temp = head;
    if (temp == NULL)
    {
        printf("list is empty\n");
        return;
    }
    while (temp != NULL)
    {
        printf("%d ->", temp->id);
        temp = temp->next;
    }
    printf("NULL\n");
}
void insertAtBeginning()
{
    newnode = (node*) malloc (sizeof(node));
    if(!newnode)
    {
        printf("memory allocation failed\n");
        return;
    }
    newnode->next = NULL;
    printf("enter id\n");
    scanf("%d",&newnode->id);
    newnode->next = head;
    head = newnode;

}

void insertAtEnd()
{
    newnode = (node*) malloc(sizeof( node));
    if (!newnode)
    {
        printf("Memory allocation failed\n");
        return;
    }
    newnode->next = NULL;
    printf("Enter id:\n ");
    scanf("%d", &newnode->id);

    if (head == NULL)
    {
        head = newnode;
    }
    else
    {
        temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
    }
}

void insertAtSpecificPosition()
{
    newnode = (node*) malloc (sizeof( node));
    if(!newnode)
    {
        printf("memory allocation failed\n");
        return;
    }
    newnode->next = NULL;
    temp=head;

    int position;
    printf("Enter position to insert\n");
    scanf("%d",&position);

    if(position<0)
    {
        printf("entered position is not available\n");
        free(newnode);
        return;
    }
    else if(position ==0)
    {
        printf("inserting to head node\n");
        newnode->next=head;
        head = newnode;
    }
    else
    {
        for(int i=0; i< position-1;i++)
        {
            if (temp==NULL)
            {
                printf("list dont have entered position\n");
                return;
            }
            temp=temp->next;
        }

        printf("enter id\n");
        scanf("%d",&newnode->id);
        newnode->next =temp->next;
        temp->next=newnode;


    }

}
void insertAfterSpecificPosition()
{
    newnode = (node*) malloc (sizeof( node));
    if(!newnode)
    {
        printf("memory allocation failed\n");
        return;
    }
    newnode->next = NULL;
    temp=head;

    int position;
    printf("Enter position to insert\n");
    scanf("%d",&position);

    if(position<0)
    {
        printf("entered position is not available\n");
        free(newnode);
        return;
    }
    else if(position ==0)
    {
        printf("inserting to head node\n");
        newnode->next=head;
        head = newnode;
    }
    else
    {
        for(int i=0; i< position;i++)
        {
            if (temp==NULL)
            {
                printf("entered position is not available in list\n");
                return;
            }
            temp=temp->next;
        }

        printf("enter id\n");
        scanf("%d",&newnode->id);
        newnode->next =temp->next;
        temp->next=newnode;


    }

}

