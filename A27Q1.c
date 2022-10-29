//////////////////////////////////////////////////////////////////////////////
//
// Function name :StrCpyX
// Description   :Used to Copy The Content of ine string into another string
// Input         :"Marvellous Multi OS"
// Output        :"Marvellous Multi OS"
// Date          :09/06/22
// Author        :Ashwini Prakash Naiknaware
//
//////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void StrCpyX(char *src, char *dest)
{
    // filter

    while (*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';
}

int main()
{
    char arr[30] = "Marvellous Multi OS";
    char brr[30]; // Empty String

    StrCpyX(arr, brr);

    printf("%s", brr); // Marvellous Multi OS

    return 0;
}