///////////////////////////////////////////////////////////////////////////////////
//
// Function Name :Display
// Description   :Used to convert capital charchter to small case and viseversa
// Input         :Q  m   4  %
// Output        :q  M   4  %
// Date          :08/06/22
// Author Name   :Ashwini Prakash Naiknaware
//
///////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Display(char ch)
{
    if ((ch >= 65) && (ch <= 90))
    {
        printf("%c", ch + 32);
    }
    else if ((ch >= 97) && (ch <= 122))
    {
        printf("%c", ch - 32);
    }
    else
    {
        printf("%c", ch);
    }
}
int main()
{
    char cValue = '\0';

    printf("Enter the charachter\n");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}