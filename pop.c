#include "main.h"

/**
 * pop - deletes the topmost element from the stack
 * top: pointer to the top element of the stack
 * 
 * Return: returns a pointer to the current topmost element on the stack
*/
struct node * pop(struct node *top)
{
    struct node *temp;
    if (top == NULL)
    {
        printf("Stack is empty");
        exit(0);
    }
    else
    {
         printf("---DELETING---\n");
        temp = top;
        top = top->next;
        printf("%d has been deleted\n", temp->data);
        free (temp);

        return (top);
    }
}