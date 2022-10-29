///////////////////////////////////////////////////////////////////////////////////
//
// Function Name :DisplayASCII
// Description   :Used to Display the ASCII table
// Input         :-
// Output        :-
// Date          :08/06/22
// Author Name   :Ashwini Prakash Naiknaware
//
///////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void DisplayASCII()
{
    int i = 0;

    for (i = 1; i <= 255; i++)
    {
        printf("\n%c : %d", i, i);
    }
}

/*void DisplayASCII()
{
    char ch = '\0';
    int i = 0;

    for (i = 0; i <= 255; i++)
    {
        printf("\n%c\t %d\t", ch, i);
        ch = ch + 1;
    }
}*/

int main()
{
    DisplayASCII();

    return 0;
}