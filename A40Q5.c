//////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:write(inbuild function)
// Description  :Used  to write the string at the end of file Demo.txt
// Input        :Demo.txt   Hello World 
// Output       :Write Hello world at the end Demo.txt file
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
    int fd = 0;
    char Fname[20];
    char Data[10];
    char String[30];
    int iRet = 0;
    int i = 0;

    printf("Enter File name you want to open\n");
    scanf("%s", Fname);

    printf("Enter the String you want concate\n");
    scanf("%[^'\n']s", String);

    fd = open(Fname, O_RDWR | O_APPEND);

    if (fd == -1)
    {
        printf("Unable to open file\n");
        return -1;
    }

    for (i = 0; i < sizeof(String); i++)
    {
        write(1, Data, fd);
    }

    return 0;
}