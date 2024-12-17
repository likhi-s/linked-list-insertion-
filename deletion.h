#ifndef DELETION_H
#define DELETION_H

enum deletion
{
    DELETE_FROM_BEGINNING=3,DELETE_FROM_END,DELETE_FROM_SPECIFIC_LOCATION,DELETE_SPECIFIC_NODE_BY_VALUE
};

void deletionMenu();
void deletefrombeginning();
void deletefromEnd();
void deletefromSpecificPosition();
void deleteSpecificNodeByValue();

#endif // DELETION_H
