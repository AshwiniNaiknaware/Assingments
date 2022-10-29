////////////////////////////////////////////////////////////
//
//Function Name : SumNonFact
//Discription:    Used to print summation of Non factors
//Input:          Integer
//Output:         Integer
//Date:           5/1/22
//Author:         Ashwini Prakash Naiknaware
//
////////////////////////////////////////////////////////////
#include<stdio.h>

int SumNonFact(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt=iNo; iCnt>0; iCnt--)
    {
        if(iNo % iCnt != 0)
        {
           iSum = iSum+iCnt;
        }
    }
    return iSum;
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet=SumNonFact(iValue);
    printf("%d",iRet);

    return 0;
}