#include<stdio.h>

int SumDigits(int iNo)
{
    int iSum = 0;

    while(iNo != 0)
    {
        iSum = iSum + (iNo % 10);
        iNo = iNo / 10;
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number:\n");
    scanf("%d",&iValue);
    iRet= SumDigits(iValue);

    printf("Addition of digit is: %d\n",iRet);

    return 0;
}