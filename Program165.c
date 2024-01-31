#include<stdio.h>  // for printf and scanf
#include<stdlib.h>  // for calloc malloc realloc free

//Structure Declaration 
struct node
{
    int data;           // 4 bytes   
    struct node* next;  // 8 bytes   self refrential structure 
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;
int main()
{
    struct node * First = NULL;   // Name *First is the pointer of 8 bytes

    
    return 0;
}
