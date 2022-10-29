//////////////////////////////////////////////////////////////
//
// Function Name :DisplayDigit
// Description   :Used to display the digits in string
// Input         :"marve89llous121"
// Output        :"89121"
// Date          :09/06/22
// Author Name   :Ashwini Prakash Naiknaware
//
//////////////////////////////////////////////////////////////

#include <stdio.h>

void DisplayDigit(char *str)
{
    while (*str != '\0')
    {
        if ((*str >= 48) && (*str <= 57))
        {
            printf("%c", *str);
        }
        str++;
    }
}

int main()
{
    char Arr[20];

    printf("Enter String\n");
    scanf("%[^'\n']s", Arr);

    DisplayDigit(Arr);

    return 0;
}