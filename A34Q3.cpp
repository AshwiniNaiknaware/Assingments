//////////////////////////////////////////////////////////////////
//
// Function Name :AddN
// Description   :Used for Summation of n numbers
// Input         :{10, 20, 30, 40, 50}   {10.0, 3.7, 9.8, 8.7}
// Output        :150                     32.2
// Date          :19/06/22
// Author        :Ashwini Prakash Naiknaware
//
//////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

template <class T>
T AddN(T *crr, int iSize)
{
    T iSum;

    int i = 0;

    // Filter

    for (i = 0; i < iSize; i++)
    {
        iSum = iSum + *(crr + i);
    }
    return iSum;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    float brr[] = {10.0, 3.7, 9.8, 8.7};

    int iSumX = AddN(arr, 5);
    cout << iSumX << endl;

    float fSumX = AddN(brr, 4);
    cout << fSumX << endl;

    return 0;
}