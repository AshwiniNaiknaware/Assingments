//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :StrCpyCap
// Decsription   :Used to copy one string into anathor string by converting all small chracheters into capital
// Input         :"Marvellous Python 2"
// Output        :"MARVELLOUS PYTHON 2"
// Date          :10/06/22
// Aothor        :Ashwini Prakash Naiknaware
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void StrCpyCap(char *src, char *dest)
{
    while (*src != '\0')
    {
        if ((*src >= 'A') && (*src <= 'Z'))
        {
            *dest = *src;
        }
        else if ((*src >= 'a') && (*src <= 'z'))
        {
            *dest = *src - 32;
        }
        else if ((*src >= 48) && (*src <= 57))
        {
            *dest = *src;
        }
        else if (*src == ' ')
        {
            *dest = *src;
        }

        src++;
        dest++;
    }
    *dest = '\0';
}

int main()
{
    char arr[30] = "Marvellous Python 2";
    char brr[30]; // Empty string

    StrCpyCap(arr, brr);

    printf("%s", brr); // MAREVELLOUS PYTHON 2

    return 0;
}