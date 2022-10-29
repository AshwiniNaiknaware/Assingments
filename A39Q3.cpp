/////////////////////////////////////////////////////////////////////
//
// Function Name:Small
// Description  :Used to return the count of small charachters
// Input        :HElloWOrLD
// Output       :4
// Date         :20/06/22
// Author       :Ashwini Prakash Naiknaware
//
/////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

int Small(char *str)
{
    static int iCnt = 0;

    if (*str != '\0')
    {
        if ((*str >= 'a') && (*str <= 'z'))
        {
            iCnt++;
        }
        str++;
        Small(str);
    }
    return iCnt;
}

int main()
{
    char arr[20];
    int iRet = 0;

    cout << "Enter String\n";
    cin >> arr;

    iRet = Small(arr);

    cout << iRet << endl;

    return 0;
}