//////////////////////////////////////////////////////////////
//
// Function Name :StruprX
// Description   :Used to conver the string into upper case
// Input         :"Marvellous Multi OS"
// Output        :"MARVELLOUS MULTI OS"
// Date          :09/06/22
// Author Name   :Ashwini Prakash Naiknaware
//
//////////////////////////////////////////////////////////////

#include <stdio.h>

void StruprX(char *str)
{
    while (*str != '\0')
    {
        if ((*str >= 97) && (*str <= 122))
        {
            *str = *str - 32;
        }
        str++;
    }
}

int main()
{
    char Arr[20];

    printf("Enter String\n");
    scanf("%[^'\n']s", Arr);

    StruprX(Arr);

    printf("Modified String is : %s", Arr);

    return 0;
}