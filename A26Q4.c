//////////////////////////////////////////////////////////////////////////////////////
//
// Function name :LastChar
// Description   :Used to find the index of Last occurence of entered charachter from string
// Input         :"Marvellous Multi OS"  'M'  |"Marvellous Multi OS" 'w'  |"Marvellous Multi OS" 'e'
// Output        :11                          |-1                         |4
// Date          :09/06/22
// Author        :Ashwini Prakash Naiknaware
//
///////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <string.h>

int LastChar(char *str, char ch)
{
    int i = 0;
    int iCnt = 0;
}

int main()
{
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter String\n");
    scanf(" %[^\n]s", arr);
    printf("Size of *str is %d \n:", sizeof(arr));

    printf("Enter the charachter\n");
    scanf(" %c", &cValue);

    iRet = LastChar(arr, cValue);

    printf("Charachter Location is %d", iRet);

    return 0;
}