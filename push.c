#include "main.h"

/**
 * push - adds an element onto the stack
 * n: represents the integer value to be added onto the stack
 * 
 * Description: creates a new node that will hold the contents of the data to be added onto the stack
 * Once created it updates the top of the stack to point to the new node.
*/
struct node * push(struct node *top, int n)
{
        struct node *new;

        new = malloc(sizeof(struct node));
        new->data = n;
        new->next = top;
        top = new;

        return(top);
}
