/////////////////////////////////////////////////////////////////////////////////////
//
// Function name :StrCatX
// Description   :Used to concat second string after first string
// Input         :"Marvellous Infosystem"   "Logic Building"
// Output        :"Marvellous Infosystem Logic Building"
// Date          :09/06/22
// Author        :Ashwini Prakash Naiknaware
//
//////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void StrCatX(char *src, char *dest)
{
    while (*src != '\0') // Traverse first string till end
    {
        src++;
    }

    *src++ = ' '; // to add space between two string

    while (*dest != '\0')
    {
        *src = *dest;
        src++;
        dest++;
    }
    *dest = '\0';
}

int main()
{
    char arr[50] = "Marvellous Infosystem";
    char brr[30] = "Logic Building";

    StrCatX(arr, brr);

    printf("%s", arr); // Marvellous Infosystem Logic Building

    return 0;
}