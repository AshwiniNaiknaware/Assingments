////////////////////////////////////////////////////////////////////////
//
// Function Name:WhiteSpace
// Description  :Used to give the count of white spaces in given string
// Input        :HE llo WOr LD
// Output       :3
// Date         :20/06/22
// Author       :Ashwini Prakash Naiknaware
//
////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

int WhiteSpace(char str[])
{
    static int iCnt = 0;

    if (*str != '\0')
    {
        if ((*str == ' '))
        {
            iCnt++;
        }
        str++;

        WhiteSpace(str);
    }
    return iCnt;
}

int main()
{
    char arr[20];
    int iRet = 0;

    cout << "Enter String\n";
    cin.getline(arr, 20);

    iRet = WhiteSpace(arr);

    cout << "White spaces are : " << iRet;

    return 0;
}