//////////////////////////////////////////////////////////////
//
// Function Name :StrtoggelX
// Description   :Used to toggel the string
// Input         :"Marvellous Multi OS"
// Output        :"mARRVELLOUS mULTI os"
// Date          :09/06/22
// Author Name   :Ashwini Prakash Naiknaware
//
//////////////////////////////////////////////////////////////

#include <stdio.h>

void StrtoggelX(char *str)
{
    while (*str != '\0')
    {
        if ((*str >= 97) && (*str <= 122))
        {
            *str = *str - 32;
        }
        else if ((*str >= 65) && (*str <= 90))
        {
            *str = *str + 32;
        }
        str++;
    }
}

int main()
{
    char Arr[20];

    printf("Enter String\n");
    scanf("%[^'\n']s", Arr);

    StrtoggelX(Arr);

    printf("Modified String is : %s", Arr);

    return 0;
}