/////////////////////////////////////////////////////////////////////////////
//
//Function Name:  FactRev
//Discription:    Used to print factors of entered number in reverse order
//Input:          Integer
//Output:         Integer
//Date:           5/1/22
//Author:         Ashwini Prakash Naiknaware
//
///////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void FactRev(int iNo)
{
    int iCnt = 0;
    
    for(iCnt=iNo/2; iCnt>0; iCnt--)
    {
        if(iNo % iCnt == 0)
        {
            printf("%d" " ",iCnt);
        }
    }
}
int main()
{
    int iValue = 0;
    printf("Enter number\n");
    scanf("%d",&iValue);

    FactRev(iValue);

    return 0;
}