#include <stdio.h>

struct entry {
    int             value;
    struct entry    *next;
};

void insertEntry( struct entry *oldEntry, struct entry *newEntry );
void removeEntry( struct entry *previousEntry );

int main (void) {

    struct entry p1, p2, p3;
    struct entry *listPointer;
    struct entry HEAD = { 0, &p1 };

    p1.value = 1;
    p1.next = &p2;

    p2.value = 2;
    p2.next = &p3;

    p3.value = 3;
    p3.next = NULL;

    removeEntry ( &HEAD );

    listPointer = HEAD.next;

    while( listPointer ) {
        printf("%d\n", listPointer->value);
        listPointer = listPointer->next;
    }

    return 0;

}

void insertEntry( struct entry *oldEntry, struct entry *newEntry ) {

    newEntry->next = oldEntry->next;
    oldEntry->next = newEntry;

}

void removeEntry( struct entry *previousEntry ) {

    previousEntry->next = previousEntry->next->next;

}
