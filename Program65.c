/*1.problems on n numbers*/
#include<stdio.h>   //for printf and scanf
#include<stdlib.h>  //for malloc and free

int main()
{
    int iCount = 0;
    int *ptr = NULL;  //pointer set to NULL (e.g open gun, knife)
    int iCnt = 0;
    printf("Enter how much elements you want to enter:\n");
    scanf("%d",&iCount);
    // (int *) is a typecasting and this sentence is stored in ptr pointer for memory allocation using malloc
    ptr = (int *)malloc(iCount * sizeof(int));  // * is muliplication

    printf("Enter the elements:\n");
    //pointer ptr gives name to the Array as a ptr
    for(iCnt=0; iCnt<iCount; iCnt++)  //iteration for printing array
    {
        scanf("%d",&ptr[iCnt]);  //
    }

    printf("Your entered elements are:\n");

    return 0;
}