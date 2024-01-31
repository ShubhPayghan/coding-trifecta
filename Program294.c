/*
    Write a C program that prompts the user to enter a filename, 
    then attempts to delete the file with the given name in the current 
    directory. Ensure that the program handles errors appropriately and 
    displays whether the file deletion was successful or not.
*/
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>       

int main()
{
    char FileName[30];

    printf("Enter the name of file that you want to create into current directory\n");
    scanf("%s",FileName);

    unlink(FileName);

    return 0;
}
