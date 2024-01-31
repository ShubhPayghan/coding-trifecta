#include<stdio.h>  // for printf and scanf
#include<stdlib.h>  // for calloc malloc realloc free

//Structure Declaration 
struct node
{
    int data;           // 4 bytes   
    struct node * next;  // 8 bytes  cannot remove node * from here
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

// function to insert a new node at the beginning of a linked list
void InsertFirst(PPNODE Head, int No)
{
    //step 1: Allocate memory for node
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE)); 
    //Step 2: Initialize the node
    newn->data = No;
    newn->next = NULL;

    //Step 3: Check whether LL is empty or not
    if(*Head == NULL)   //LL is empty
    {
        *Head = newn;
    }
    else                //LL contains atleast 1 node in it
    {
        newn -> next = *Head; //make the new node point to the current first node
        *Head = newn; //update the head pointer to point to the new node
    }
}

int main()
{
    PNODE First = NULL;   // New name for struct node * is PNODE

    // Insert nodes at the beginning of the linked list
    InsertFirst(&First, 51);  //InsertFirst(60,51)
    InsertFirst(&First, 21);  //InsertFirst(60,21)
    InsertFirst(&First, 11); 
    return 0;
}
