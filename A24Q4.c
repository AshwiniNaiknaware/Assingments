/////////////////////////////////////////////////////////////////////////
//
// Function Name :ChkVowel
// Description   :Used to check if string contain vowel or not
// Input         :"marvellous"  "Demo"  "xyz"
// Output        :TRUE           TRUE   FALSE
// Date          :08/06/22
// Author Name   :Ashwini Prakash Naiknaware
//
//////////////////////////////////////////////////////////////////////////

#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkVowel(char *str)
{
    int iCnt = 0;

    while (*str != '\0')
    {
        if ((*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u'))
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
    char Arr[20];
    BOOL iRet = FALSE;

    printf("Enter String\n");
    scanf("%[^'\n']s", Arr);

    iRet = ChkVowel(Arr);

    if (iRet == TRUE)
    {
        printf("Contain Vowel\n");
    }
    else
    {
        printf("There is no Vowel\n");
    }
    return 0;
}