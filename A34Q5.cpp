///////////////////////////////////////////////////////////////////////
//
// Function Name :Min
// Description   :Used to find smallest value from array
// Input         :{10, 20, 30, 40, 50}         {10.0, 3.7, 9.8, 8.7}
// Output        :10                            3.7
// Date          :19/06/22
// Author        :Ashwini Prakash Naiknaware
//
/////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

template <class T>
T Min(T *crr, int iSize)
{
    T min = crr[0];
    int i = 0;

    for (i = 0; i < iSize; i++)
    {
        if (crr[i] < min)
        {
            min = crr[i];
        }
    }
    return min;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    float brr[] = {10.0, 3.7, 9.8, 8.7};

    int iRet = Min(arr, 5);
    cout << iRet << endl; // 10

    float fRet = Min(brr, 4);
    cout << fRet << endl; // 3.7

    return 0;
}