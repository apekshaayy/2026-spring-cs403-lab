#include <stdio.h>
#include <string.h>
#include "symtab.h"

Node SymTab[TABSZ];

int hash(char * s) {
    int hash_value = 0;
    // hash_value = sum(ascii) % TABSZ
    for (int i = 0; i < strlen(s); i ++) {
        hash_value += s[i];
    }
    return hash_value % TABSZ;
}

void insert(char * symbol) {
    int index = hash(symbol);
    while (SymTab[index].occupied == 1) {
        index += 1;
        index = index % TABSZ;
    }
    strcpy(SymTab[index].name, symbol);
    SymTab[index].occupied = 1;
    printf("Inserted %s successfully.\n", symbol);
}

int search(char * symbol) {
    int hashVal = hash(symbol);
    int index = hashVal;
    for (int i = 0; i < TABSZ; i++) {
        if (SymTab[i].occupied && strcmp(SymTab[i].name, symbol) == 0) {
            index = i;
            return index;
        }
    }
    return -1;
}

void display() {
    printf("----- Symbol Table -----\n");
    for (int i = 0; i < TABSZ; i ++) {
        if (SymTab[i].occupied) {
            printf("Index %d: %s\n", i, SymTab[i].name);
        }
        else {
            printf("Index %d: --\n", i);
        }
    }
}
#include <stdio.h>
#include <string.h>
#include "symtab.h"

Node SymTab[TABSZ];

int hash(char * s) {
    int hash_value = 0;
    // hash_value = sum(ascii) % TABSZ
    for (int i = 0; i < strlen(s); i ++) {
        hash_value += s[i];
    }
    return hash_value % TABSZ;
}

void insert(char * symbol) {
    int index = hash(symbol);
    while (SymTab[index].occupied == 1) {
        index += 1;
        index = index % TABSZ;
    }
    strcpy(SymTab[index].name, symbol);
    SymTab[index].occupied = 1;
    printf("Inserted %s successfully.\n", symbol);
}

int search(char * symbol) {
    int hashVal = hash(symbol);
    int index = hashVal;
    for (int i = 0; i < TABSZ; i++) {
        if (SymTab[i].occupied && strcmp(SymTab[i].name, symbol) == 0) {
            index = i;
            return index;
        }
    }
    return -1;
}

void display() {
    printf("----- Symbol Table -----\n");
    for (int i = 0; i < TABSZ; i ++) {
        if (SymTab[i].occupied) {
            printf("Index %d: %s\n", i, SymTab[i].name);
        }
        else {
            printf("Index %d: --\n", i);
        }
    }
}
#include <stdio.h>
#include <string.h>
#include "symtab.h"

Node SymTab[TABSZ];

int hash(char * s) {
    int hash_value = 0;
    // hash_value = sum(ascii) % TABSZ
    for (int i = 0; i < strlen(s); i ++) {
        hash_value += s[i];
    }
    return hash_value % TABSZ;
}

void insert(char * symbol) {
    int index = hash(symbol);
    while (SymTab[index].occupied == 1) {
        index += 1;
        index = index % TABSZ;
    }
    strcpy(SymTab[index].name, symbol);
    SymTab[index].occupied = 1;
    printf("Inserted %s successfully.\n", symbol);
}

int search(char * symbol) {
    int hashVal = hash(symbol);
    int index = hashVal;
    for (int i = 0; i < TABSZ; i++) {
        if (SymTab[i].occupied && strcmp(SymTab[i].name, symbol) == 0) {
            index = i;
            return index;
        }
    }
    return -1;
}

void display() {
    printf("----- Symbol Table -----\n");
    for (int i = 0; i < TABSZ; i ++) {
        if (SymTab[i].occupied) {
            printf("Index %d: %s\n", i, SymTab[i].name);
        }
        else {
            printf("Index %d: --\n", i);
        }
    }
}