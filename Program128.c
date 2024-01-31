//accpet string from user and count it using StrlenX function
#include<stdio.h>

int strlenX(char str[])
{
    int iCnt = 0;

    while(*str != '\0')
    {
        iCnt++;
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter the string : \n");
    scanf("%[^'\n']s",Arr);

    iRet = strlenX(Arr);  //strlen(100)

    printf("Length of string is : %d",iRet);

    return 0;
}