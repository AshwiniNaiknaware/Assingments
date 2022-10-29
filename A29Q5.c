//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :CheckBit
// Decsription   :Used to check whether the first and last bit is on or off
// Input         :Integer
// Output        :
// Date          :21/06/22
// Aothor        :Ashwini Prakash Naiknaware
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;
typedef unsigned int UINT;

BOOL CheckBit(UINT iNo)
{
    UINT iMask = 0X80000001;
    int iResult = 0;

    iResult = iNo & iMask;

    if (iResult == 0)
    {
        return FALSE;
    }
    else
    {
        return TRUE;
    }
}

int main()
{
    UINT value = 0;
    BOOL bRet = FALSE;

    printf("Enter number\n");
    scanf("%d", &value);

    bRet = CheckBit(value);

    if (bRet == TRUE)
    {
        printf("Bit is on\n");
    }
    else
    {
        printf("Bit is off\n");
    }

    return 0;
}
