////////////////////////////////////////////////////////////////////////////
//
// Function Name :Max
// Description   :Used to give the largest number from from three numbers
// Input         :(10, 20 , 30)         (10.11, 20.11, 30.11)
// Output        :30                     30.11
// Date          :19/06/22
// Author        :Ashwini Prakash Naiknaware
//
///////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

template <class T>
T Max(T no1, T no2, T no3)
{
    T max;

    if ((no1 >= no2) && (no1 >= no3))
    {
        max = no1;
    }
    else if ((no2 >= no1) && (no2 >= no3))
    {
        max = no2;
    }
    else if ((no3 >= no1) && (no3 >= no2))
    {
        max = no3;
    }

    return max;
}

int main()
{
    int iRet = 0;
    float fRet = 0.0;

    iRet = Max(10, 20, 30);
    cout << "Largest Number is : " << iRet << endl;

    fRet = Max(10.11, 20.11, 30.11);
    cout << "Largest Number is : " << fRet << endl;
    ;
    return 0;
}