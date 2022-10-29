//////////////////////////////////////////////////////////////////////////////////
//
//Function Name: SumNonFact
//Discription:   Used to print Summation of Non Fcators of entered number by user
//Input:         Integer 
//Output:        Integer
//Date:          28/04/22
//Author:        Ashwini Prakash Naiknaware
//
///////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

int SumNonFact(int iNo)
{
    int iCnt = 0;
    int iSum = 0;
    
    for(iCnt=1; iCnt<iNo; iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            iSum = iSum + iCnt ;
        }
    }
    return iSum;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);
    printf("%d",iRet);

    return 0;
}