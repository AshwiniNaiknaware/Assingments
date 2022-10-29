//////////////////////////////////////////////////////////////////////////////////////
//
// Function name :CountChar
// Description   :Used to count the frequency of entered charcahter in string
// Input         :"Marvellous Multi OS"  'M'   |"Marvellous Multi OS" 'w'
// Output        :2                            |0
// Date          :09/06/22
// Author        :Ashwini Prakash Naiknaware
//
///////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int CountChar(char *str, char ch)
{
    int iCnt = 0;

    while (*str != '\0')
    {
        if (*str == ch)
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}
int main()
{
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter String\n");
    scanf(" %[^\n]s", arr);

    printf("Enter the charachter\n");
    scanf(" %c", &cValue);

    iRet = CountChar(arr, cValue);

    printf("Charachter frequency is %d", iRet);

    return 0;
}