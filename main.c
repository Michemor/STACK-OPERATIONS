#include "main.h"

/**
 * main - driver of the entire program from where the individual
 * functions are called
*/

int main(void)
{
    struct node *top = NULL;
    // call display to print elements currently on the stack
    display(top);
    // call push function to add elements onto the stack
    printf("Add an element onto the stack\n");
    top = push(top, 2);
    display(top);
    top = push(top, 23);
    top = push(top, 18);
    top = push(top, 99);
    display(top);
    top = pop(top);
    display(top);
    return (0);
}