/////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :SearchFirst
// Description   :Used to give the first occurence of any specific number from N values
// Input         :{10, 20, 30, 10, 30, 40, 10, 40, 10}    40
// Output        : 5
// Date          :19/06/22
// Author        :Ashwini Prakash Naiknaware
//
//////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

template <class T>
int SearchFirst(T *arr, int iSize, T iNo)
{
    int i = 0;
    int temp;

    for (i = 0; i < iSize; i++)
    {
        if (iNo == *(arr + i))
        {
            temp = i;
            break;
        }
    }
    return temp;
}

int main()
{
    int arr[] = {10, 20, 30, 10, 30, 40, 10, 40, 10};
    int iRet = SearchFirst(arr, 9, 40);

    cout << iRet << endl;

    return 0;
}