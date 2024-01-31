/* accpet n numbers form user and and add all odd numbers*/
#include<stdio.h>  //for printf and scanf
#include<stdlib.h>  // for malloc and free

// int Addition(int *Arr, int iSize)
int OddAddition(int Arr[],int iSize) //(100, 4)
{
    int iCnt = 0;
    int iSum = 0;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] % 2 != 0)
        {
            iSum = iSum + Arr[iCnt];
        }
    }
    return iSum;
}

int main()
{
    int iCount = 0;
    int *ptr = NULL;
    int iCnt = 0;
    int iRet = 0;

    printf("Enter the number of elements that you want to enter:\n");
    scanf("%d",&iCount);
    
    ptr = (int *) malloc(iCount * sizeof(int));
    printf("Dynamic memeory gets allocated successfully for %d elements\n",iCount);
    
    printf("Enter the %d values:\n", iCount);
    //      1       2               3
    for(iCnt = 0; iCnt <iCount; iCnt++)
    {
        printf("\nEnter the element no %d:",iCnt+1); 
        scanf("%d",&ptr[iCnt]);
    }

    iRet = OddAddition(ptr, iCount); 
    printf("Addition of Odd numbers is :%d\n",iRet);

    free(ptr); // for deallocation after allocation or to clear the memory.
    
    printf("Dynamic memory gets deallocated successfully...\n");

    return 0;
}