///////////////////////////////////////////////
//
// Function Name:open(inbuild function)
// Description  :Used  to open the file
// Input        :Demo.txt
// Output       :File opened succsessfully
// Date         :22/06/22
// Author       :Ashwini Prakash Naiknaware
//
////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

int main()
{
    char Fname[20];
    int fd = 0;

    printf("Enter file name that you want to open\n");
    scanf("%s", Fname);

    fd = open(Fname, O_RDONLY);

    if (fd == -1)
    {
        printf("Unable to open file\n");
        return -1;
    }

    printf("File opened Succsesfully with fd %d\n", fd);

    return 0;
}