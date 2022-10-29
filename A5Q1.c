////////////////////////////////////////////////////////////
//
//Function Name : MultFact
//Discription:    Used to print multipication of factors
//Input:          Integer
//Output:         Integer
//Date:           5/1/22
//Author:         Ashwini Prakash Naiknaware
//
////////////////////////////////////////////////////////////
#include<stdio.h>

int MultFact(int iNo)
{
    int iCnt = 0;
    int iMult = 1;
    
    for(iCnt=1; iCnt<iNo; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iMult = iMult * iCnt;
        }
    }
    return iMult;
}
int main()
{
    int iValue=0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet=MultFact(iValue);
    printf("%d",iRet);

    return 0;
}