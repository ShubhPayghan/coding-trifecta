/*
    1: TO Read the data from the file

    int read(int fd, char *Buffer, int size);

    Buffer : Its a base address of character array in which we want to read the data (Empty array)
    size : Number of bytes that we want to read

    return value is of bytes successfully read from the file.

*/
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>       

int main()
{
    int fd = 0;
    int iRet = 0;
    char Arr[50] = {'\0'};

    fd = open("Marvellous.txt", O_RDWR);

    if(fd == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        iRet = write(fd,Arr,22);
        printf("%d bytes gets successfully read from the file\n", iRet);

        printf("%s\n",Arr);

        close(fd);
    }

    return 0;
}
