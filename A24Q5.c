///////////////////////////////////////////////////////////////////////////////////
//
// Function Name :Reverse
// Description   :Used to String in reverse order
// Input         :"MarvellouS"
// Output        :"SuollevrsM"
// Date          :08/06/22
// Author Name   :Ashwini Prakash Naiknaware
//
///////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Reverse(char *str)
{
    char *start = str;
    char *end = str;
    char temp;

    while (*end != '\0')
    {
        end++;
    }
    end--;

    while (start < end)
    {
        temp = *start; // Swapping Technique
        *start = *end;
        *end = temp;

        end--;
        start++;
    }
}

int main()
{
    char Arr[20];

    printf("Enter String\n");
    scanf("%[^'\n']s", Arr);

    Reverse(Arr);

    printf(Arr);

    return 0;
}