/////////////////////////////////////////////////////////////////////////////////////
//
// Function name :StrCpySmall
// Description   :Used to Copy The small charachter from string to another string
// Input         :"Marvellous multi OS"
// Output        :"arvellous multi"
// Date          :09/06/22
// Author        :Ashwini Prakash Naiknaware
//
//////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void StrCpySmall(char *src, char *dest)
{
    while (*src != '\0')
    {
        if ((*src >= 'a') && (*src <= 'z'))
        {
            *dest = *src;
            dest++;
        }
        else if (*src == ' ')
        {
            *dest = *src;
            dest++;
        }
        src++;
    }
    *dest = '\0';
}

int main()
{
    char arr[30] = "Marvellous multi OS";
    char brr[30]; // Empty String

    StrCpySmall(arr, brr);

    printf("%s", brr); // MMOS

    return 0;
}