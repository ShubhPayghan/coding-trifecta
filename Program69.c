#include<stdio.h>  //for printf and scanf
#include<stdlib.h>  // for malloc and free

void Display(int Arr[],int iSize)
{
    int iCnt = 0;
    printf("Elements of the array are:\n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\t",Arr[iCnt]);
    }
    printf("\n");
}

int main()
{
    int iCount = 0;
    int *ptr = NULL;
    int iCnt = 0;

    printf("Enter the number of elements that you want to enter:\n");
    scanf("%d",&iCount);
    
    ptr = (int *) malloc(iCount * sizeof(int));
    
    printf("Enter the values:\n");

    for(iCnt = 0; iCnt <iCount; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    Display(ptr, iCount);
    free(ptr); // for deallocation after allocation or to clear the memory.

    return 0;
}