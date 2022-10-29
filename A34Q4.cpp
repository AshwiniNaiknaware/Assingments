////////////////////////////////////////////////////////////////////
//
// Function Name :Max
// Description   :Used to give maximum number from array
// Input         :{10, 20, 30, 40, 50}   {10.0, 3.7, 9.8, 8.7}
// Output        :50                      10.0
// Date          :19/06/22
// Author        :Ashwini Prakash Naiknaware
//
////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

template <class T>
T Max(T *crr, int iSize)
{
    T max = crr[0];
    int i = 0;

    for (i = 0; i < iSize; i++)
    {
        if (crr[i] > max)
        {
            max = crr[i];
        }
    }
    return max;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    float brr[] = {10.0, 3.7, 9.8, 8.7};

    int iRet = Max(arr, 5);
    cout << iRet << endl; // 50

    float fRet = Max(brr, 4);
    cout << fRet << endl; // 10.0

    return 0;
}