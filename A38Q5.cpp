////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:Fact
// Description  :Used to give the Multiplication of digits of given number using recursion
// Input        :523
// Output       :30
// Date         :20/06/22
// Author       :Ashwini Prakash Naiknaware
//
////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

int Mult(int iNo)
{
    static int iMult = 1;

    int iDigit = 0;

    if (iNo != 0)
    {
        iDigit = iNo % 10;

        iMult = iMult * iDigit;

        iNo = iNo / 10;

        Mult(iNo);
    }
    return iMult;
}

int main()
{
    int iValue = 0, iRet = 0;

    cout << "Enter Number\n";
    cin >> iValue;

    iRet = Mult(iValue);

    cout << iRet;

    return 0;
}