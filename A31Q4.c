/////////////////////////////////////////////////////////////////////////
//
// Function Name :CheckBit
// Decsription   :Used to toggle the 7th and 10th bit of the number
// Input         :Integer
// Output        :-
// Date          :21/06/22
// Aothor        :Ashwini Prakash Naiknaware
//
/////////////////////////////////////////////////////////////////////////

#include <stdio.h>

typedef unsigned int UINT;

int OffBit(UINT iNo)
{
    UINT iMask = 0X00000240;
    int iResult = 0;

    iResult = iNo ^ iMask;

    return iResult;
}

int main()
{
    UINT value = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d", &value);

    iRet = OffBit(value);

    printf("Updated number is : %d\n", iRet);

    return 0;
}
