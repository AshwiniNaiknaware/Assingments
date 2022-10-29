//////////////////////////////////////////////////////////////////////////////
//
// Function name :StrNCpyX
// Description   :Used to Copy The Content of ine string into another string
// Input         :"Marvellous Multi OS" 10
// Output        :"Marvellous"
// Date          :09/06/22
// Author        :Ashwini Prakash Naiknaware
//
//////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void StrNCpyX(char *src, char *dest, int iCnt)
{
    if (iCnt > 30) // filter(30 = size of arr )
    {
        while (*src != '\0')
        {
            *dest = *src;
            src++;
            dest++;
        }
        *dest = '\0';
    }

    while ((*src != '\0') && (iCnt != 0))
    {
        *dest = *src;
        src++;
        dest++;
        iCnt--;
    }
    *dest = '\0';
}

int main()
{
    char arr[30] = "Marvellous Multi OS";
    char brr[30]; // Empty string

    StrNCpyX(arr, brr, 10);

    printf("%s", brr); // Marvellous

    return 0;
}