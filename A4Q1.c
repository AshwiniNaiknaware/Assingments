////////////////////////////////////////////////////////////////////////////
//
//Function Name: MultFact
//Discription:   Used to print multiplication of factors of entered number
//Input:         Integer
//Output:        Integer
//Date:          28/04/22
//Author:        Ashwini Prakash Naiknaware
//
///////////////////////////////////////////////////////////////////////////
#include<stdio.h>

int MultFact(int iNo)
{
    int iCnt=0;
    int iMul=1;

    for(iCnt=1; iCnt<iNo; iCnt++)
    {
        if(iNo%iCnt==0)
        {
            iMul = iMul*iCnt;
        }
    }
    return iMul;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet=MultFact(iValue);

    printf("%d",iRet);

    return 0;
}