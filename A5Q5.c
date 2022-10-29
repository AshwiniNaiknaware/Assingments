///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//Function Name : FactDiff
//Discription:    Used to print difference between Summation of factors and non factors of entered number 
//Input:          Integer
//Output:         Integer
//Date:           5/1/22
//Author:         Ashwini Prakash Naiknaware
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iSumFact = 0;
    int iSumNoFact =0;
    int iDiff = 0;

    for(iCnt=1; iCnt<iNo; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iSumFact = iSumFact + iCnt;
        }
    } 

    for(iCnt=iNo; iCnt>0; iCnt--)
    {
        if(iNo % iCnt != 0)
        {
            iSumNoFact = iSumNoFact + iCnt;
        }
    }
    iDiff = iSumFact - iSumNoFact;
    return iDiff;

}
int main()
{  
    int iValue = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);
    printf("%d",iRet);  

    return 0;
}