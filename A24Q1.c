/////////////////////////////////////////////////////////////////////////
//
// Function Name :CountCapital
// Description   :Used to count number of capital charachters in string
// Input         :"Marvellous Multi OS"
// Output        :4
// Date          :08/06/22
// Author Name   :Ashwini Prakash Naiknaware
//
//////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int CountCapital(char *str)
{
    int iCnt = 0;

    // filter

    while (*str != '\0')
    {
        if ((*str >= 65) && (*str <= 90))
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}
int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter String\n");
    scanf("%[^'\n']s", Arr);

    iRet = CountCapital(Arr);

    printf("%d\n", iRet);

    return 0;
}