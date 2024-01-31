/*
    1: TO write the data in the file

    int write(int fd, char *Buffer, int size);

    Buffer : Its a base address of character array which contains the  data we want to write
    size : Number of bytes that we want to write

    return value is of bytes successfully written into the file.

*/
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>       

int main()
{
    int fd = 0;
    int iRet = 0;
    char Arr[] = "Pre-Placement Activity";

    fd = open("Marvellous.txt", O_RDWR);

    if(fd == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        iRet = write(fd,Arr,22);
        printf("%d bytes gets successfully written into the file\n", iRet);

        close(fd);
    }

    return 0;
}
