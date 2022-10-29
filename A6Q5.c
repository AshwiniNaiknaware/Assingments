///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//Function Name: Count
//Discripion:    Used to count the Frequency of numbers which are less than number 6 in the entered number
//Input:         Integer
//Output:        Integer
//Date:          05/05/22
//Author:        Ashwini Prakash Naiknaware
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

int Count(int iNo)
{
    int iDigit =0;
    int iDigCnt =0;

    if(iNo < 0)
    {
        iNo =-iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit < 6)
        {
            iDigCnt++;
        }
        iNo = iNo/10;
    }
    return iDigCnt;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet=Count(iValue);
    
    printf("%d",iRet);

    return 0;
}