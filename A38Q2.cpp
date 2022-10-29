//////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:Sum
// Description  :Used to give the addition of digits from number using recursive function
// Input        :879
// Output       :24
// Date         :20/06/22
// Author       :Ashwini Prakash Naiknaware
//
///////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

int Sum(int iNo)
{
    static int iSum = 0;
    int iDigit = 0;

    if (iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo / 10;

        Sum(iNo);
    }

    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    cout << "Enter the Number\n";
    cin >> iValue;

    iRet = Sum(iValue);

    cout << iRet;

    return 0;
}