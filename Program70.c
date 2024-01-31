/*1.problems on n numbers*/
#include<stdio.h>  //for printf and scanf
#include<stdlib.h>  // for malloc and free

// void Display(int *Arr, int iSize)
void Display(int Arr[],int iSize) //(100, 4)
{
    int iCnt = 0;
    printf("\nElements of the array are:\n");
    //      1           2          3 
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\t",Arr[iCnt]); //4
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
    printf("Dynamic memeory gets allocated successfully for %d elements\n",iCount);
    
    printf("Enter the %d values:\n", iCount);
    //      1       2               3
    for(iCnt = 0; iCnt <iCount; iCnt++)
    {
        printf("\nEnter the element no %d:",iCnt+1); //4
        scanf("%d",&ptr[iCnt]);
    }

    Display(ptr, iCount); //Display (100, 4)
    free(ptr); // for deallocation after allocation or to clear the memory.
    
    printf("Dynamic memory gets deallocated successfully...\n");

    return 0;
}