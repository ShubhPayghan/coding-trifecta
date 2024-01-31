/*
    sigly linear linked list
    total 8 functions are used. 6 fuctions are the call by address and remaining
    two are call by value i.e. insert first, insert last,insert at pos, delete first ,delete last
    insert at pos  and display, count repectively.
*/

#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node * next;
};

typedef struct Node NODE;
typedef struct Node * PNODE;
typedef struct Node ** PPNODE;

void InsertFirst(PPNODE Head, int No)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if(*Head == NULL)
    {
        *Head = newn;  
    }
    else
    {
        newn->next = *Head; 
        *Head = newn;   
    }
}

void InsertLast(PPNODE Head, int No)
{
    //Temporary pointer for LL traversal
    PNODE Temp = *Head; 
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if(*Head == NULL)
    {
        *Head = newn;  
    }
    else
    {
        //Travel the LL till last node
        while(Temp->next != NULL)
        {
            Temp = Temp->next;
        }
        // Add the address of new node at the end of last node
        Temp -> next = newn;
    }
}

void Display(PNODE Head)
{
    printf("Contents of linked list : \n");

    while((Head != NULL))
    {
        printf("| %d | ->",Head->data);
        Head = Head->next;
    }
    printf("NULL\n");
}

int Count(PNODE Head)
{
    int iCnt = 0;

    while((Head != NULL))
    {
        iCnt++;
        Head = Head->next;
    }
    return iCnt;
}

void DeleteFirst(PPNODE Head)
{
    PNODE Temp = *Head;
    if(*Head == NULL)   //case 1
    {
        return; 
    }
    else if((*Head) -> next == NULL)  //case 2
    {
        free(*Head);
        *Head == NULL;
    }
    else    //case 3
    {
        *Head = (*Head) -> next;
        free(Temp);
    }
}

void DeleteLast(PPNODE Head)
{
    PNODE Temp = *Head;
    if(*Head == NULL)   //case 1
    {
        return;
    }
    else if((*Head) -> next == NULL)  //case 2
    {
        free(*Head);
        *Head == NULL;
    }
    else    //case 3
    {
        while(Temp->next->next != NULL)
        {
            Temp = Temp -> next;
        }
        free(Temp->next);
        Temp->next = NULL;
    }
}

void InsertAtPos(PPNODE Head, int No, int iPos)
{
    int Size = Count(*Head);
    PNODE newn = NULL;
    int i = 0;
    PNODE temp = *Head;

    //Case 1 : Invalid Position   (Ex : 11, -2, 8)
    if((iPos < 1) || (iPos> Size+1))
    {
        printf("Invalid Position\n");
        return;
    }
    //Case 2 : First Position     (Ex : 1)
    if(iPos == 1)
    {
        InsertFirst(Head, No);
    }
    //Case 3 : Last Position      (Ex : 7)
    else if(iPos == Size + 1)
    {
        InsertLast(Head, No);
    }
    //Case 4 : Position is in between first and last. (Ex : 5)
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));
        newn->data = No;
        newn->next = NULL;

        for(i = 1; i<iPos-1; i++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next = newn;
    }
}

void DeleteAtPos(PPNODE Head, int iPos)
{
    int Size = Count(*Head);
    PNODE temp = *Head;
    PNODE targatednode = NULL;
    int i = 0;

    //Case 1 : Invalid Position   (Ex : 11, -2, 8)
    if((iPos < 1) || (iPos> Size))
    {
        printf("Invalid Position\n");
        return;
    }
    //Case 2 : First Position     (Ex : 1)
    if(iPos == 1)
    {
        DeleteFirst(Head);
    }
    //Case 3 : Last Position      (Ex : 6)
    else if(iPos == Size)
    {
        DeleteLast(Head);
    }
    //Case 4 : Position is in between first and last. (Ex : 5)
    else
    {
        for(i = 1; i< iPos; i++)
        {
            temp = temp->next;
        }
        targatednode = temp->next;
        temp ->next = temp->next->next;
        free(targatednode);
    }
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 111);
    InsertFirst(&First, 101);
    InsertFirst(&First, 51);  
    InsertFirst(&First, 21);  
    InsertFirst(&First, 11); 
    InsertLast(&First, 121);

    InsertAtPos(&First, 105, 5);

    DeleteLast(&First);
    Display(First);
    iRet = Count(First);
    printf("Number of nodes are : %d\n", iRet);

    DeleteAtPos(&First,5);
    Display(First);
    iRet = Count(First);
    printf("Number of nodes are : %d\n", iRet);
  
    return 0;
}

/*
    Explanation of this program

    Data Structure Definition:

The program defines a structure Node which represents a node in the linked list. 
Each node contains an integer data element and a pointer to the next node.
Function Definitions:

InsertFirst: Inserts a new node with the given data at the beginning of the linked list.
InsertLast: Inserts a new node with the given data at the end of the linked list.
Display: Displays the contents of the linked list.
Count: Counts and returns the number of nodes in the linked list.
DeleteFirst: Deletes the first node of the linked list.
DeleteLast: Deletes the last node of the linked list.
InsertAtPos: Inserts a new node with the given data at the specified position in the linked list.
DeleteAtPos: Deletes the node at the specified position in the linked list.
Main Function:

In the main function:
A linked list (First) is initialized as NULL.
Several nodes are inserted at the beginning and end of the linked list using 
InsertFirst, InsertLast, and InsertAtPos.
The program then deletes the last node using DeleteLast.
It displays the contents of the modified linked list and the count of nodes.
It deletes a node at a specific position using DeleteAtPos.
Again, it displays the contents of the modified linked list and the count of nodes.
Execution:

The program demonstrates the basic operations on a singly linked list, including insertion at the
 beginning, end, and at a specified position, deletion from the beginning, end, and at a specified position, 
 and displaying the current state of the linked list.
Note: There's a small error in the DeleteLast function where *Head == NULL should be *Head = NULL 
(assignment instead of comparison) to correctly update the head of the linked list.

*/