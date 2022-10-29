//////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:read(inbuild function)
// Description  :Used  to Display size of file
// Input        :Demo.txt
// Output       :File size is 56 Bytes
// Date         :27/06/22
// Author       :Ashwini Prakash Naiknaware
//
//////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

int main()
{
    char Fname[20];
    int fd = 0;
    char Data[10];
    int iSum = 0;
    int iRet = 0;

    printf("Enter the File name you want to open\n");
    scanf("%s", Fname);

    fd = open(Fname, O_RDONLY);

    if (fd == -1)
    {
        printf("Unable to open file\n");
        return -1;
    }

    printf("File is opend Succsesfully with fd %d\n", fd);

    while ((iRet = read(fd, Data, sizeof(Data))) != 0)
    {
        iSum = iSum + iRet;
    }

    close(fd);

    printf("File Size is %d Bytes\n", iSum);

    return 0;
}