//////////////////////////////////////////////////////////////////////////////////
//
// Function Name :StrCpyRev
// Decsription   :Used to copy one string into anathor string in reverse order
// Input         :"Marvellous Python"
// Output        :"nohtyp suollevraM"
// Date          :10/06/22
// Aothor        :Ashwini Prakash Naiknaware
//
//////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void StrCpyRev(char *src, char *dest)
{
    char *start = src;
    char *end = src;

    while (*src != '\0')
    {
        end++;
    }
    *end--;

    while (start != end)
    {
        *dest = *src;
        start++;
        end--;
    }
    *dest = '\0';
}

int main()
{
    char arr[30] = "Marvellous Python";
    char brr[30];

    StrCpyRev(arr, brr);

    printf("%s", brr); // nohtyp suollevraM

    return 0;
}