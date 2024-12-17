#ifndef INSERTION_H
#define INSERTION_H

typedef struct node
{
    int id;
    struct node* next;
}node ;

enum linkedlist
{
    CREATE_LIST=1,DISPLAY_lIST,INSERT_AT_BEGINNING,INSERT_AT_END,INSERT_AT_SPECIFIC_LOCATION,INSERT_AFTER_SPECIFIC_LOCATION,EXIT
};

void insertionMenu();
void displayList();
void insertAtEnd();
void insertAtSpecificPosition();
void insertAfterSpecificPosition();

#endif // INSERTION_H
