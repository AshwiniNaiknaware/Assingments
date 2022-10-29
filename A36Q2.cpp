//////////////////////////////////////////////////////////////////////
//
// Function Name:Display
// Description  :Used to Display the Pattern using recursive function
// Input        :
// Output       :1  2  3  4  5
// Date         :20/06/22
// Author       :Ashwini Prakash Naiknaware
//
///////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

void Display()
{
    static int i = 1;

    if (i <= 5)
    {
        cout << i << "\t";
        i++;
        Display();
    }
}

int main()
{
    Display();

    return 0;
}