#include "insertion.h"
#include <stdbool.h>
int main()
{
    int option;
    printf("1. Insertion\n");
    printf("enter option\n");
    scanf("%d",&option);
    while(true)
    {
        switch(option)
        {
        case 1:
            insertionMenu();
            break;
        default:
            printf("invalid option...try again\n)");
            break;
        }
    }

}
