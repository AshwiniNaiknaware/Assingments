/////////////////////////////////////////////////////////////////////////
//
// Function Name:Display
// Description  :Used to Display the Pattern  using recursive function
// Input        :5
// Output       :5 4 3 2 1
// Date         :20/06/22
// Author       :Ashwini Prakash Naiknaware
//
/////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

void Display(int iNo)
{
    if (iNo >= 1)
    {
        cout << iNo << "\t";
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