/////////////////////////////////////////////////////////////////////////////////////////
//
//Function Name: CountTwo
//Discription:   Used to Count the freaquency of number 2 in the entered number by user
//Input:         Integer
//Output:        Integer
//Date:          05/05/22
//Author:        Ashwini Prakash Naiknaware
//
/////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
int CountTwo(int iNo)
{
    int  iDigit = 0;
    int iDigCnt = 0;

    if(iNo < 0)
    {
        iNo =-iNo;
    }

    while(iNo != 0)
    {
        iDigit =iNo % 10;
         
        if(iDigit == 2)
        {
            iDigCnt++;
        }
        iNo = iNo/10;
    }
    return iDigCnt;
}
int main()
{
    int iValue= 0;
    int iRet = 0;  

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = CountTwo(iValue);
    printf("%d",iRet);

    return 0;
}