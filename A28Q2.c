////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :StrCpyX
// Decsription   :Used to copy one string into anathor string by removing all white spaces
// Input         :"Marvel lous Pyth on"
// Output        :"MarvellousPython"
// Date          :10/06/22
// Aothor        :Ashwini Prakash Naiknaware
//
////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void StrCpyX(char *src, char *dest)
{
    while (src != '\0')
    {
        if ((*src >= 'A') && (*src <= 'Z') || (*src >= 'a') && (*src <= 'z') || (*src >= 48) && (*src <= 57))
        {
            *dest = *src;
        }
        else if (*src == ' ')
        {
            src++;
            *dest = *src;
        }
        src++;
    }
    *dest = '\0';
}
int main()
{
    char arr[30] = "Marvel lous Pyth on";
    char brr[30]; // Empty String

    StrCpyX(arr, brr); // MarvellousPython

    printf("%s", brr);

    return 0;
}