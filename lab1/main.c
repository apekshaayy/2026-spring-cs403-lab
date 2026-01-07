#include <stdio.h>
#include "symtab.h"

int main() {

    printf("LAB 1: CS403\n\n");

    insert("A");
    insert("K");
    insert("B");
    insert("AA");
    insert("D");

    printf("\n");

    char *names[] = {"A", "K", "B", "AA", "D"};
    for (int i = 0; i < 5; i++) {
        int idx = search(names[i]);
        if (idx != -1)
            printf("'%s' found at index %d\n", names[i], idx);
        else
            printf("'%s' not found in SysTab\n", names[i]);
    }

    printf("\n");

    display();

    return 0;
}