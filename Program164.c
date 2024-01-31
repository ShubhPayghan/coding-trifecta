#include<stdio.h>
#include<stdlib.h>

//Structure Declaration
struct node
{
    int data;           // 4 bytes   
    struct node *next;  // 8 bytes   self refrential structure 
};

int main()
{
    struct node *First = NULL;   // Name *First is the pointer of 8 bytes

    
    return 0;
}
