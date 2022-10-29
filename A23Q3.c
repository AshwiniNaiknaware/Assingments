/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :Display
// Description   :Used to Display if charachter entered is capital all charachters from input charachters till z
//               : if charachter entered is small case all charachters from input in reverse order till a
//               :in other case return directly
// Input         :Q                    | m                          | 8
// Output        :Q R S T U V W X Y Z  | m l k j i h g f e d c b a  |-
// Date          :08/06/22
// Author Name   :Ashwini Prakash Naiknaware
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Display(char ch)
{
    while ((ch >= 65) && (ch <= 90))
    {
        printf("%c ", ch);
        ch++;
    }
    while ((ch >= 97) && (ch <= 122))
    {
        printf("%c ", ch);
        ch--;
    }
}

int main()
{
    char cValue = 0;

    printf("Enter the charachter\n");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}