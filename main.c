#include<stdio.h>
#include "insertion.h"
#include "deletion.h"
#include <stdbool.h>
#include "traversal.h"
#include "search.h"

int main()
{
    int option;
    printf("******MENU******\n");
    printf("1. Insertion\n2. Deletion\n3. Traversal\n4. Search\n");
    printf("enter option\n");
    scanf("%d",&option);
    while(true)
    {
        switch(option)
        {
        case 1:
            insertionMenu();
            break;
        case 2:
            deletionMenu();
            break;
        case 3:
            traversal();
            break;
        case 4:
            search();
            break;
        default:
            printf("invalid option...try again\n)");
            break;
        }
    }

}
