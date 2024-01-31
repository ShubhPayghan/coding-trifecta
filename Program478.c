#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *lchild;
    struct node *rchild;
}NODE, *PNODE, **PPNODE;

void Insert(PPNODE Head, int no)
{
    PNODE newn = NULL;
    PNODE temp = *Head;

    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->lchild = NULL;
    newn->rchild= NULL;

    if(*Head == NULL) // BST is empty
    {
        *Head = newn;
    }
    else  //BST contains atleast one node
    {
        while(1)    //Uncondtional loop
        {
            if(no == temp->data) //if element is same break the loop
            {
                printf("Unable to insert as data is already present\n");
                free(newn);
                break;
            }
            else if(no > temp->data)
            {
                if(temp->rchild == NULL)   // to shift right side again till null
                {
                    temp->rchild = newn;
                    break;
                }
                temp = temp->rchild;  // to shift right side
            }
            else if(no <temp->data)
            {
                if(temp->lchild == NULL)    // to shift left side again till null
                {
                    temp->lchild = newn;
                    break;
                }
                temp = temp->lchild;    //to shift left side
            }
        }
    }
}

int main()
{
    PNODE first = NULL;
    
    Insert(&first, 21);
    Insert(&first, 11);
    Insert(&first, 51);

    return 0;
}