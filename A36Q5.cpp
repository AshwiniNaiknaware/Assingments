//////////////////////////////////////////////////////////////////////
//
// Function Name:Display
// Description  :Used to Display the Pattern using recursive function
// Input        :
// Output       :a b c d e f
// Date         :20/06/22
// Author       :Ashwini Prakash Naiknaware
//
//////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

void Display()
{
    static char ch = 'a';

    if (ch <= 'f')
    {
        cout << ch << "\t";
        ch++;
        Display();
    }
}

int main()
{
    Display();

    return 0;
}