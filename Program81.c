//accpet the n number from user and find out the Mainimum number.
#include<stdio.h>
#include<stdlib.h>
int Minimum(int Arr[], int iSize)
{
    int iCnt = 0;
    int iMin = Arr[0];

    for (iCnt = 0; iCnt <iSize; iCnt++)
    {
        if(Arr[iCnt]<iMin) //jar shirt chi kimmat imax peksha mothi asel tar
        {
            iMin =  Arr[iCnt];
        }
    }
    return iMin;
}

int main()
{
    int iCount = 0, iCnt = 0, iRet = 0;
    int *ptr = NULL;

    printf("Enter number of elements that you want to enter:\n");
    scanf("%d",&iCount);

    ptr = (int *)malloc(iCount * sizeof(int));
    printf("Dynamic memory gets allocated successfully...");

    printf("Enter the elements :\n");
    for(iCnt = 0;iCnt<iCount;iCnt++)
    {
        printf("\nEnter the element no %d :",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    iRet = Minimum(ptr, iCount);
    printf("minimum element is :%d\n",iRet);

    free(ptr);
    printf("Dynamic memory gets deallocated successfully...\n");
    return 0;
}