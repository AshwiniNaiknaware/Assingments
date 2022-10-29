///////////////////////////////////////////////////////////////////////
//
// Function Name:Display
// Description  :Used to Display the Pattern using recursive function
// Input        :5
// Output       :1 2 3 4 5
// Date         :20/06/22
// Author       :Ashwini Prakash Naiknaware
//
////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

void Display(int iNo)
{
    static int i = 1;

    if (i <= iNo)
    {
        cout << i << "\t";
        i++;
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