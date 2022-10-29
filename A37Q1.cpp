////////////////////////////////////////////////////////////////////////
//
// Function Name:Display
// Description  :Used to Display the Pattern using recursive function
// Input        :5
// Output       :* * * * *
// Date         :20/06/22
// Author       :Ashwini Prakash Naiknaware
//
////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

void Display(int iNo)
{
    // static int i = 0;

    if (iNo >= 1)
    {
        cout << "*\t";
        iNo--;
        Display(iNo);
    }
}

int main()
{
    int iValue = 0;

    cout << "Enter the Number\n";
    cin >> iValue;

    Display(iValue);

    return 0;
}