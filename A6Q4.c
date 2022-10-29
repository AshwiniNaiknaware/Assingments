//////////////////////////////////////////////////////////////////////////
//
//Function Name: CountFour
//Discription:   Used to count the frequency of number 4 in entered number 
//Input:         Integer
//Output:        Integer
//Date:          05/05/22
//Author:        Ashwini Prakash Naiknaware
//
//////////////////////////////////////////////////////////////////////////
#include<stdio.h>
int CountFour(int iNo)
{
    int  iDigit = 0;
    int iDigCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit =iNo % 10;

        if(iDigit == 4)
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

    iRet = CountFour(iValue);
    printf("%d",iRet);

    return 0;
}