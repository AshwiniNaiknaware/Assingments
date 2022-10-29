//////////////////////////////////////////////////////////////////////
//
// Function Name:Display
// Description  :Used to Display the Pattern using recursive function
// Input        :6
// Output       :a b c d e f
// Date         :20/06/22
// Author       :Ashwini Prakash Naiknaware
//
//////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

void Display(int iNo)
{
    // static int i = 1;
    static char ch = 'a';

    if (iNo >= 1)
    {
        cout << ch << "\t";
        ch++;
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