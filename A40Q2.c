///////////////////////////////////////////////
//
// Function Name:creat(inbuild function)
// Description  :Used  to create the file
// Input        :Demo.txt
// Output       :File created successfully
// Date         :22/06/22
// Author       :Ashwini Prakash Naiknaware
//
///////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int main()
{
    char Fname[20];
    int fd = 0;

    printf("Enter file name you want to create\n");
    scanf("%s", Fname);

    fd = creat(Fname, 0777);

    if (fd == -1)
    {
        printf("Unable to create file\n");
        return -1;
    }

    printf("File ctreated succesfully with fd %d\n", fd);

    close(fd);

    return 0;
}