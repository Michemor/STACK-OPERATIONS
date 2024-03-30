# STACK DATA STRUCTURE
#### structures pointers dynamic_memory_allocation
A stack is a data structure that follows the LIFO principle.
LIFO principle states that the last element to be added is the first to be removed

The stack is implemented using arrays and linked lists
In this example I am using a linked list which is a linear data structure <br>
that contains nodes and each node has pointers to the next node and a data field.
To implement a stack we maintain a pointer named as top <br> 
(subject to change depending on the) developer which helps us keep track of those elements <br>
at the top of the stack.
We use structures to store our data and pointers.

## Stack operations

1. Push
It is implemented as a function and adds one element to the top of the stack

PSEUDO CODE:
    - Create a new node
    - Allocate memory to the node
    - Initalize the data field of the node
    - Initialize the pointer of the node to the top element.
    - Assign the top element to the node
    (if you're using a top pointer in main return the value of the top)

2. Pop
It is implemented as a function and deletes one element to the top of the stack

PSEUDO CODE:
    - Declare a temp node to track the movement of nodes.
    - check whether the top is empty.
    If empty we cannot proceed and we have to return back to main
    - Initialize temp with the top variable
    - Assign top to point to the next node
    - Free temp
     (return the top back to track the new position of temp)

3. Display
It is implemented as a function and displays the data in the stack

PSEUDO CODE:
    - Maintain a temp variable
    - Check whether the stack is empty
    If empty return and print an error message
    - If not empty initialize temp with the top of the stack
    - using a loop print the content of the data field of each node
