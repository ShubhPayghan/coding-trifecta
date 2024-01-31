#include<stdio.h>
#include<stdbool.h>

bool CheckCapital(char cValue)
{
    if((cValue >= 65) && (cValue <= 90)) // 65 peksha motha ani 90 peksha lahan
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char ch = '\0';
    bool bRet = false;

    printf("Enter the character : \n");
    scanf("%c",&ch);

    bRet = CheckCapital(ch);
    if(bRet == true)
    {
        printf("Its a Capital letter \n");
    }
    else
    {
        printf("Its not a Capital letter \n");
    }
    return 0;
}