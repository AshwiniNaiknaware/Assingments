/////////////////////////////////////////////////////////////////////////
//
// Function Name :CountSmall
// Description   :Used to count number of small charachters in string
// Input         :"Marvellous"
// Output        :9
// Date          :08/06/22
// Author Name   :Ashwini Prakash Naiknaware
//
//////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int CountSmall(char *str)
{
    int iCnt = 0;

    // Filter

    while (*str != '\0')
    {
        if ((*str >= 97) && (*str <= 122))
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

    iRet = CountSmall(Arr);

    printf("%d", iRet);

    return 0;
}