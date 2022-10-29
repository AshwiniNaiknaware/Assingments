///////////////////////////////////////////////////////////////////////
//
// Function Name:Display
// Description  :Used to Display the Pattern using recursive function
// Input        :
// Output       :5 4 3 2 1
// Date         :20/06/22
// Author       :Ashwini Prakash Naiknaware
//
///////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

void Display()
{
    static int i = 5;

    if (i >= 1)
    {
        cout << i << "\t";
        i--;
        Display();
    }
}

int main()
{
    Display();

    return 0;
}