#include"insertion.h"
#include "traversal.h"
#include <stdbool.h>


extern node *head;
extern node *temp, *newnode;

void traversal()
{
    int choice;

    while(true)
    {
        printf("1. Create a list\n2. Display List\n3. Forward Traversal\n4. Node count\n5. Exit\n");
        printf("Enter choice:\n");
        scanf("%d",&choice);
        switch(choice)
        {
        case CREATE_LIST:
            insertAtEnd();
            break;
        case DISPLAY_lIST:
            displayList();
            break;
        case FORWARD_TRAVERSAL:
            forwardTraversal();
            break;
        case NODE_COUNT:
            nodeCount();
            break;
        case EXIT_FROM_TRAVERSAL:
            printf("Exiting\n");
            exit(0);
            break;
        default:
            printf("Invalid choice,try again\n");
            break;
        }
    }
}

void forwardTraversal()
{

    if(head==0)
    {
        printf("list is empty\n");
        return;
    }
    temp=head;
    printf("Linked List: ");
    while(temp!=0)
    {
        printf("%d -> ", temp->id);
        temp=temp->next;
    }
    printf("NULL\n");
    printf("traversed till end of the node\n");
}

void nodeCount()
{
    int count =0;
    if(head==0)
    {
        printf("list is empty\n");
        return;
    }
    temp=head;
    while(temp!=0)
    {
        count++;
        temp=temp->next;
    }
    printf("%d nodes are available in the current linked list\n",count);
}
