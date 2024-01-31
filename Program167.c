#include<stdio.h>  // for printf and scanf
#include<stdlib.h>  // for calloc malloc realloc free

//Structure Declaration 
struct node
{
    int data;           // 4 bytes   
    struct node * next;  // 8 bytes 
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE Head, int No)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE)); 

    newn->data = No;
    newn->next = NULL;
}

int main()
{
    PNODE First = NULL;   // New name for struct node * is PNODE

    InsertFirst(&First, 51);  
    InsertFirst(&First, 21);
    InsertFirst(&First, 11);
    return 0;
}
