//////////////////////////////////////////////////////////////////////////////////////
//
// Function name :ChkChar
// Description   :Used to check if the entered charachteris present in string or not
// Input         :"Marvellous Multi OS"  'e'   |"Marvellous Multi OS" 'w'
// Output        :TRUE                         |FALSE
// Date          :09/06/22
// Author        :Ashwini Prakash Naiknaware
//
///////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkChar(char *str, char ch)
{
    int iCnt = 0;

    while (*str != '\0')
    {
        if (*str == ch)
        {
            iCnt++;
        }
        str++;
    }

    if (iCnt != 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    char arr[20];
    char cValue;

    BOOL bRet = FALSE;

    printf("Enter String\n");
    scanf(" %[^\n]s", arr);

    printf("Enter the charachter\n");
    scanf(" %c", &cValue);

    bRet = ChkChar(arr, cValue);

    if (bRet == TRUE)
    {
        printf("Charachter found\n");
    }
    else
    {
        printf("Charchter not found\n");
    }

    return 0;
}