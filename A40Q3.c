//////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:write(inbuild function)
// Description  :Used  to read all data from file and Display all data from the file
// Input        :Demo.txt
// Output       :Display all data of file
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
    int iRet = 0;
    char Data[10];

    printf("Enter the file name you want to open\n");
    scanf("%s", Fname);

    fd = open(Fname, O_RDWR);
    if (fd == -1)
    {
        printf("Unable to open file\n");
        return -1;
    }
    printf("File is opend Succesfully with fd %d\n", fd);

    while ((iRet = read(fd, Data, sizeof(Data))) != 0) // kashatun read karaych // kay read karaycha //kuthparyant read karaycha
    {
        write(1, Data, iRet);
    }
    close(fd);

    return 0;
}