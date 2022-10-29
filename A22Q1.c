//////////////////////////////////////////////////////////////////////////
//
// Function Name :ChkAlpha
// Description   :Used to check if entered carachter is aplhabet or not
// Input         :F         &
// Output        :TRUE      FALSE
// Date          :08/06/22
// Author Name   :Ashwini Prakash Naiknaware
//
//////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkAlpha(char ch)
{

    if ((ch >= 'A') && (ch <= 'Z') || (ch >= 'a') && (ch <= 'z'))
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

    bRet = ChkAlpha(cValue);

    if (bRet == TRUE)
    {
        printf("It is Charachter\n");
    }
    else
    {
        printf("It is not a Charachter\n");
    }

    return 0;
}