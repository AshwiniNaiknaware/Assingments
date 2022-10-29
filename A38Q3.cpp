////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:Strlen
// Description  :Used to give the count of number of charachters from string using recursive function
// Input        :Hello
// Output       :5
// Date         :20/06/22
// Author       :Ashwini Prakash Naiknaware
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

int Strlen(char *str)
{
    // static int i = 0;
    static int iCnt = 0;

    if (*str != '\0')
    {
        iCnt++;
        str++;
        // i++;

        Strlen(str);
    }

    return iCnt;
}

int main()
{
    int iRet = 0;
    char arr[20];

    cout << "Enter String" << endl;
    cin >> arr;

    iRet = Strlen(arr);

    cout << iRet;

    return 0;
}