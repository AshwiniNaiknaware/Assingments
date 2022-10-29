/////////////////////////////////////////////////////////////////////////
//
// Function Name :Difference
// Description   :Used to count difference between the frequency of small
//               :charachters and frequency of capital charachters
// Input         :"MarvellouS"
// Output        :6    (8-2)
// Date          :08/06/22
// Author Name   :Ashwini Prakash Naiknaware
//
//////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int Difference(char *str)
{
    int iCntSmall = 0;
    int iCntCapt = 0;
    int Diff = 0;

    // Filter

    while (*str != '\0')
    {
        if ((*str >= 97) && (*str <= 122))
        {
            iCntSmall++;
        }
        else if ((*str >= 65) && (*str <= 90))
        {
            iCntCapt++;
        }
        str++;

        Diff = iCntSmall - iCntCapt;
    }
    return Diff;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter String\n");
    scanf("%[^'\n']s", Arr);

    iRet = Difference(Arr);

    printf("%d", iRet);

    return 0;
}