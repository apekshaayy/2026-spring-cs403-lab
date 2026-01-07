#ifndef SYMTAB_H
#define SYMTAB_H

# define TABSZ 10

typedef struct {
    char name[10];
    int occupied; // 1 -> occupied, 0 -> not occupied
} Node;

extern Node SysTab[TABSZ];

int hash(char * s);
void insert(char *symbol); //Add a symbol to the table
int search(char *symbol);  //Search for a symbol in the table returning its index or -1 if not found
void display();            //Display the contents of the symbol table

#endif