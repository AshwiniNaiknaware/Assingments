////////////////////////////////////////////////////////////////////////
//
// Function Name :ChkSmall
// Description   :Used to check if entered charachter is small case or not
// Input         :g      D
// Output        :TRUE   FALSE
// Date          :08/06/22
// Author Name   :Ashwini Prakash Naiknaware
//
/////////////////////////////////////////////////////////////////////////

#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSmall(char ch)
{
    if ((ch >= 97) && (ch <= 122))
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

    bRet = ChkSmall(cValue);

    if (bRet == TRUE)
    {
        printf("It is small Charachter\n");
    }
    else
    {
        printf("It is not a small Charachter\n");
    }

    return 0;
}