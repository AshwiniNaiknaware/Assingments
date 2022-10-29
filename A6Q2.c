/////////////////////////////////////////////////////////////
//
//Function Name: ChkZero 
//Discription:   Used to check if number contain zero or not 
//Input:         Integer
//Output:        Boolean
//Date:          05/05/22
//Author:        Ashwini Prakash Naiknaware
//
/////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkZero(int iNo)
{
    int iDigit = 0;
    int iDigCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit==0)
        {
            return TRUE;
        }
        iNo= iNo/10;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number\n");
    scanf("%d",&iValue);

    bRet=ChkZero(iValue);

    if(bRet == TRUE)
    {
        printf("It Contain Zero\n");
    }
    else
    {
        printf("There is no Zero\n");
    }

    return 0;
}