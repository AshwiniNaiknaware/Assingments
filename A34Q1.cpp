/////////////////////////////////////////////////////////
//
// Function Name :Multiply
// Description   :Used to Multiply the two numbers
// Input         :(10, 20)        (10.0f, 20.0f)
// Output        :200              200
// Date          :19/06/22
// Author        :Ashwini Prakash Naiknaware
//
/////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

template <class T>
T Multiply(T no1, T no2)
{
    T ans;
    ans = no1 * no2;
    return ans;
}

int main()
{
    int iRet = Multiply(10, 20);
    cout << iRet << endl;

    float fRet = Multiply(10.0f, 20.0f);
    cout << iRet << endl;

    return 0;
}