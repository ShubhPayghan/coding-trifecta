/*
    Write a C program that takes the name of a file from the user, 
    attempts to open the file in read-write mode, and displays whether
    the file was successfully opened or not. If the file is successfully
    opened, print a success message along with the file descriptor. 
    Additionally, close the file after opening.
*/
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>       

int main()
{
    char FileName[30];
    int fd = 0;

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
        close(fd);
    }

    return 0;
}
