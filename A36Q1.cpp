///////////////////////////////////////////////////////////////////////
//
// Function Name:Display
// Description  :Used to Display the Pattern using recursive function
// Input        :
// Output       :* * * * *
// Date         :20/06/22
// Author       :Ashwini Prakash Naiknaware
//
////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

void Display()
{
    static int i = 1;

    if(i <= 5)
    {
        cout << "*\t";
        i++;
        Display();
    }
}

int main()
{
    Display();

    return 0;
}