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

void Inorder(PNODE Head)
{
    if(Head != NULL)
    {
        Inorder(Head->lchild);
        printf("%d\n",Head->data);
        Inorder(Head->rchild);
    }
}

void Preorder(PNODE Head)
{
    if(Head != NULL)
    {
        printf("%d\n",Head->data);
        Preorder(Head->lchild);
        Preorder(Head->rchild);
    }
}

int main()
{
    PNODE first = NULL;
    
    Insert(&first, 21);
    Insert(&first, 11);
    Insert(&first, 51);

    printf("Inorder traversal is : \n");
    Inorder(first);

    printf("Preorder traversal is : \n");
    Preorder(first);

    return 0;
}