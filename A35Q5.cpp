//////////////////////////////////////////////////////////////////////////
//
// Function Name :Reverse
// Description   :Used to reverse the array elements
// Input         :{10, 20, 30, 10, 30, 40, 10, 40, 10}
// Output        :{10, 40, 10, 40,30, 10, 30, 20, 10}
// Date          :19/06/22
// Author        :Ashwini Prakash Naiknaware
//
//////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

template <class T>
void Reverse(T *arr, int iSize)
{
    T *start = arr;
    T *end = arr;
    T temp;
    int i = 0;

    while (arr[i] != (iSize - 1))
    {
        end++;
    }

    while (start < end)
    {
        for (i = 0; i < iSize; i++)
        {
            temp = *start;
            *start = *end;
            *end = temp;
        }
    }
}

int main()
{
    int arr[] = {10, 20, 30, 10, 30, 40, 10, 40, 10};

    for (int i = 0; i < 9; i++)
    {
        cout << arr[i] << " "; // 10  20  30  10  30  40  10  40  10
    }
    cout << endl;

    Reverse(arr, 9);

    for (int i = 0; i < 9; i++)
    {
        cout << arr[i] << " "; // 10  40  10  40  30  10  30  20  10
    }

    return 0;
}