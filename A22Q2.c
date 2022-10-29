////////////////////////////////////////////////////////////////////////
//
// Function Name :ChkCapital
// Description   :Used to check if entered charachter is capital or not
// Input         :F      d
// Output        :TRUE   FALSE
// Date          :08/06/22
// Author Name   :Ashwini Prakash Naiknaware
//
/////////////////////////////////////////////////////////////////////////

#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkCapital(char ch)
{
    if ((ch >= 65) && (ch <= 90))
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
    scanf("%c", &cValue);

    bRet = ChkCapital(cValue);

    if (bRet == TRUE)
    {
        printf("It is a Capital Charachter\n");
    }
    else
    {
        printf("It is not a Capital Charachter\n");
    }

    return 0;
}