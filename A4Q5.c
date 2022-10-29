/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//Function Name: FactDiff
//Discription:   Used to print difference between summation of factors and  Non Fcators of entered number by user
//Input:         Integer 
//Output:        Integer
//Date:          28/04/22
//Author:        Ashwini Prakash Naiknaware
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

int FcatDiff(int iNo)
{
    int iCnt = 0;
    int iSum = 0 , iSumFact = 0 , iSumNonFact = 0;

    
    for(iCnt=1; iCnt<iNo; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iSumFact = iSumFact + iCnt ;
        }
    }

    for(iCnt=1; iCnt<iNo; iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            iSumNonFact = iSumNonFact + iCnt ;
        }
    }

    iSum = iSumFact - iSumNonFact;
    
    return iSum;

}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet=FcatDiff(iValue);
    
    printf("%d",iRet);

    return 0 ;
}