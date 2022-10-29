////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//Function Name: CountDiff
//Discription:   Used to count the difference between sum of even digits and sum of odd numbers in entered number from user
//Input:         Integer
//Output:        Integer
//Date:          05/05/22
//Author:        Ashwini Prakash Naiknaware
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

int CountDiff(int iNo)
{
    int iDigit = 0, SumEven = 0, SumOdd = 0, iDiff = 0;

    if(iNo < 0)
    {
        iNo = -iNo ;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit % 2 == 0)
        {
            SumEven = SumEven + iDigit;
        }
        else
        {
            SumOdd = SumOdd + iDigit;
        }
        
        iNo = iNo/10;

        iDiff = SumEven - SumOdd;
    }
    return iDiff;
}
int main()
{
    int iValue = 0 , iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet=CountDiff(iValue);
    
    printf("%d",iRet);

    return 0;
}