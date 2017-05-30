#include <stdio.h>

struct entry {
    int             value;
    struct entry    *previous;
    struct entry    *next;
};

void insertEntry( struct entry *oldEntry, struct entry *newEntry );
void removeEntry( struct entry *entryToRemove );

int main (void) {

    struct entry p1, p2, p3;

    struct entry *listPointer;
    struct entry HEAD = { 0, NULL, &p1 };

    p1.value = 1;
    p1.previous = &HEAD;
    p1.next = &p2;

    p2.value = 2;
    p2.previous = &p1;
    p2.next = NULL;

    p3.value = 3;
    p3.previous = NULL;
    p3.next = NULL;

    insertEntry ( &p2, &p3 );

    removeEntry ( &p1 );

    listPointer = HEAD.next;

    while( listPointer ) {
        printf("%d\n", listPointer->value);
        listPointer = listPointer->next;
    }

    return 0;

}

void insertEntry( struct entry *oldEntry, struct entry *newEntry ) {

    newEntry->previous = oldEntry;
    newEntry->next = oldEntry->next;

    oldEntry->next = newEntry;

}

void removeEntry( struct entry *entryToRemove ) {

    entryToRemove->previous->next = entryToRemove->next;

}
