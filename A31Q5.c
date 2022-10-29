////////////////////////////////////////////////////////////////////
//
// Function Name :CheckBit
// Decsription   :Used to on the first 4 bits of the given number
// Input         :Integer
// Output        :
// Date          :21/06/22
// Aothor        :Ashwini Prakash Naiknaware
//
/////////////////////////////////////////////////////////////////////

#include <stdio.h>

typedef unsigned int UINT;

int OnBit(UINT iNo)
{
    UINT iMask = 0X0000000F;
    int iResult = 0;

    iResult = iNo | iMask;

    return iResult;
}

int main()
{
    UINT value = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d", &value);

    iRet = OnBit(value);

    printf("Updated number is : %d\n", iRet);

    return 0;
}
