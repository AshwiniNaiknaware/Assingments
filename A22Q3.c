////////////////////////////////////////////////////////////////////////
//
// Function Name :ChkDigit
// Description   :Used to check if entered charachter is didgit or not
// Input         :7      d
// Output        :TRUE   FALSE
// Date          :08/06/22
// Author Name   :Ashwini Prakash Naiknaware
//
/////////////////////////////////////////////////////////////////////////

#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkDigit(char ch)
{
    if ((ch >= 48) && (ch <= 57))
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

    bRet = ChkDigit(cValue);

    if (bRet == TRUE)
    {
        printf("It is a Digit\n");
    }
    else
    {
        printf("It is not a Digit\n");
    }

    return 0;
}