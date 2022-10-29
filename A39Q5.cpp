/////////////////////////////////////////////////////////////////////
//
// Function Name:Reverse
// Description  :Used to reverse the number using recursive function
// Input        :523
// Output       :325
// Date         :21/06/22
// Author       :Ashwini Prakash Naiknaware
//
/////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

int Reverse(int iNo)
{
    int iDigit = 0;
    static int Rev = 0;

    if (iNo != 0)
    {
        iDigit = iNo % 10;
        Rev = Rev * 10 + iDigit;
        iNo = iNo / 10;

        Reverse(iNo);
    }
    return Rev;
}

int main()
{
    int iRet = 0;
    int iValue = 0;

    cout << "Enter Number" << endl;
    cin >> iValue;

    iRet = Reverse(iValue);

    cout << iRet;

    return 0;
}