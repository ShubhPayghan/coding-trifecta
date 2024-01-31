// Problem Statement : accept input from user and check whether the given number is even or odd

// Step1 : Undestand the problem statement
// Conclusion : we are going to use if else bool statement to solve 
// Step 2 : Algorithm
/*
    START
        Accept number from user
        Divide that number by 2
        If remainder is 0 then display Even
        otherwise display Odd
    STOP
*/

#include<stdio.h>
#include<stdbool.h>

///////////////////////////////////////////////////////////////////////////
//
//  Function name :     CheckEven
//  Description :       It is used to see, the number is odd or even
//  Input :             int
//  Output :            int
//  Auther name :       Shubham Devidas Payghan
//  Date :              10/10/2023
//
///////////////////////////////////////////////////////////////////////////

bool CheckEven(int iNo)
{
    if((iNo % 2) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

///////////////////////////////////////////////////////////////////////////
//
//  Entry Point function
//
///////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    bRet = CheckEven(iValue);
    if(bRet == true)
    {
        printf("%d is an even number\n",iValue);
    }
    else
    {
        printf("%d is an odd number\n",iValue);
    }

    return 0;
}