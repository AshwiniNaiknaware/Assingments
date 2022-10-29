////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:Max
// Description  :Used to return the largest Digit from Number using recursive function
// Input        :87983
// Output       :9
// Date         :20/06/22
// Author       :Ashwini Prakash Naiknaware
//
////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

int Max(int iNo)
{
    int iDigit = 0;
    static int iLarg = 0;

    if (iNo != 0)
    {
        iDigit = iNo % 10;

        if (iDigit > iLarg)
        {
            iLarg = iDigit;
        }
        iNo = iNo / 10;

        Max(iNo);
    }

    return iLarg;
}

int main()
{
    int iRet = 0;
    int iValue = 0;

    cout << "Enter Number" << endl;
    cin >> iValue;

    iRet = Max(iValue);

    cout << iRet;

    return 0;
}