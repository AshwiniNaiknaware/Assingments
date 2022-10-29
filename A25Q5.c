////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :CountWhite
// Description   :Used to count the white spaces in string
// Input         :"Marvellous"    "Marvellous Infosystem"    "Marvellous Infosystems By Piyush Khairnar"
// Output        :0                 1                         5
// Date          :09/06/22
// Author Name   :Ashwini Prakash Naiknaware
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int CountWhite(char *str)
{
    int iCnt = 0;

    while (*str != '\0')
    {
        if (*str == ' ') // white space
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter String\n");
    scanf("%[^'\n']s", Arr);

    iRet = CountWhite(Arr);

    printf("%d", iRet);

    return 0;
}