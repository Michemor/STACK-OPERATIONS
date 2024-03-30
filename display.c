#include "main.h"
/**
 * display - prints out the contents of a stack
 * 
 * 
 * Description : checks whether the stack is empty first. If empty
 * prints an error message and exits from the function. If not it displays the contents of the stack
*/
void display(struct node *top)
{
    struct node *temp;
    if (top == NULL)
    {
        printf("Stack empty\n");
    }
    else
    {
        temp = top;
        printf("----DISPLAYING STACK----\n");
        while(temp)
        {
            printf("%d\n", temp->data);
            temp = temp->next;
        }
    }
}