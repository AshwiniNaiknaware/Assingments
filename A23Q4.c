///////////////////////////////////////////////////////////////////////////////////
//
// Function Name :ChkSpecial
// Description   :Used to check if the entered charachter is special symbol or not
// Input         :%        d
// Output        :FALSE    TRUE
// Date          :08/06/22
// Author Name   :Ashwini Prakash Naiknaware
//
///////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSpecial(char ch)
{
    if ((ch >= 32) && (ch <= 47))
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
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the charachter\n");
    scanf("%d", &cValue);

    bRet = ChkSpecial(cValue);

    if (bRet == TRUE)
    {
        printf("It is a special charachter\n");
    }
    else
    {
        printf("It is not special charachter\n");
    }

    return 0;
}