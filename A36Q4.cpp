//////////////////////////////////////////////////////////////////////
//
// Function Name:Display
// Description  :Used to Display the Pattern using recursive function
// Input        :
// Output       :A B C D E F
// Date         :20/06/22
// Author       :Ashwini Prakash Naiknaware
//
//////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

void Display()
{
    static char ch = 'A';

    if (ch <= 'F')
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