////////////////////////////////////////////////////////////////////////////////
//
// Function Name:Min
// Description  :Used to return the smallest Digit from Number using recursion
// Input        :87983
// Output       :3
// Date         :20/06/22
// Author       :Ashwini Prakash Naiknaware
//
////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

int Min(int iNo)
{
    int iDigit = 0;
    static int iSmall = 9;

    if (iNo != 0)
    {
        iDigit = iNo % 10;

        if (iDigit < iSmall)
        {
            iSmall = iDigit;
        }
        iNo = iNo / 10;

        Min(iNo);
    }
    return iSmall;
}

int main()
{
    int iRet = 0;
    int iValue = 0;

    cout << "Enter Number" << endl;
    cin >> iValue;

    iRet = Min(iValue);

    cout << iRet;

    return 0;
}