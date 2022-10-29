/////////////////////////////////////////////////////////////////////////////
//
// Function Name:Fact
// Description  :Used to give the factorial of given number  using recursion
// Input        :5
// Output       :120
// Date         :20/06/22
// Author       :Ashwini Prakash Naiknaware
//
/////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

int Fact(int iNo)
{
    // static int i = 1;
    static int iFact = 1;

    if (iNo >= 1)
    {
        iFact = iFact * iNo;
        iNo--;
        Fact(iNo);
    }
    return iFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout << "Enter Number\n";
    cin >> iValue;

    iRet = Fact(iValue);

    cout << iRet;

    return 0;
}