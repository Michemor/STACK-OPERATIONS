#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data;
    struct node *next;
};

//FUNCTION DEFINITIONS
struct node * push(struct node *, int);
void display(struct node *);
struct node * pop(struct node *);


#endif /* MAIN_H */