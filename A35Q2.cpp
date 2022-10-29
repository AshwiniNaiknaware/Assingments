//////////////////////////////////////////////////////////////////////////
//
// Function Name :Frequency
// Description   :Used to count the frequency of number from N numbers
// Input         :{10, 20, 30, 10, 30, 40, 10, 40, 10}    10
// Output        :Frequency  4
// Date          :19/06/22
// Author        :Ashwini Prakash Naiknaware
//
//////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

template <class T>
int Frequency(T *brr, int iSize, T iNo)
{
    int i = 0;
    int iCnt;

    for (i = 0; i < iSize; i++)
    {
        if (iNo == *(brr + i))
        {
            iCnt++;
        }
    }
    return iCnt;
}

int main()
{
    int arr[] = {10, 20, 30, 10, 30, 40, 10, 40, 10};
    int iRet = Frequency(arr, 9, 10);

    cout << iRet << endl; // 4

    return 0;
}