/*1.problems on n numbers*/
#include<stdio.h>   //for printf and scanf
#include<stdlib.h>  //for malloc and free

void Display(int Arr[], int iSize)
{
    int iCnt = 0;

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\t", Arr[iCnt]);
    }
    printf("\n");
}

int main()
{
    int iCount = 0;
    int *ptr = NULL;  //pointer set to NULL (e.g open gun, knife)
    int iCnt = 0;
    printf("Enter how much elements you want to enter:\n");
    scanf("%d",&iCount);
    // (int *) is a typecasting and this sentence is stored inside ptr pointer for memory allocation using malloc
    ptr = (int *)malloc(iCount * sizeof(int));  // * is muliplication

    //pointer ptr gives name to the Array as a ptr
    //      1           2          3
    for(iCnt = 0; iCnt < iCount; iCnt++)  //iteration for printing array
    {
        scanf("%d",&ptr[iCnt]);  //4
    }

    printf("Your entered elements are:\n");

    Display(ptr,iCount);  //calls the display. 

    printf("\n");

    return 0;
}