//////////////////////////////////////////////////////////////
//
// Function Name :StrlwrX
// Description   :Used to conver the string into lower case
// Input         :"Marvellous Multi OS"
// Output        :"marvellous multi os"
// Date          :09/06/22
// Author Name   :Ashwini Prakash Naiknaware
//
//////////////////////////////////////////////////////////////

#include <stdio.h>

void StrlwrX(char *str)
{
    while (*str != '\0')
    {
        if ((*str >= 65) && (*str <= 90))
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

    StrlwrX(Arr);

    printf("Modified String is : %s", Arr);

    return 0;
}