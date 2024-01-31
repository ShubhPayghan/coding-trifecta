#include<stdio.h>  // for printf and scanf
#include<stdlib.h>  // for calloc malloc realloc free

//Structure Declaration 
struct node
{
    int data;           // 4 bytes   
    struct node * next;  // 8 bytes  we cannot remove node * from here 
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;
int main()
{
    PNODE First = NULL;   // New name for struct node * is PNODE

    return 0;
}
