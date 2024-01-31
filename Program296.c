/*
    Write a C program that prompts the user to enter the name of an 
    existing file in the current directory, opens the file in read and 
    write mode, reads the first 10 bytes from the file, and displays the 
    data read. If the file doesn't exist or cannot be opened, 
    an appropriate error message should be displayed.
*/
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>       
#include<string.h>

int main()
{
    char FileName[30];
    char Arr[100] = {'\0'};
    int fd = 0, iRet = 0;

    printf("Enter the name of file that you want to open from current directory\n");
    scanf("%s",FileName);

    fd = open(FileName, O_RDWR);

    if(fd == -1)
    {
        printf("Unable to open %s file\n",FileName);
    }
    else
    {
        printf("%s gets opened successfully with file descriptor %d\n",FileName, fd);

        iRet = read(fd, Arr,10);

        printf("%d bytes gets successfully read from the file\n", iRet);

        printf("Data from file is : %s", Arr);
        
        close(fd);
    }

    return 0;
}
