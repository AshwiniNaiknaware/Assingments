////////////////////////////////////////////////////////////////////////////
//
//Function Name:  FactRev
//Discription:    Used to print Factoes in Decresing order of entered number
//Input:          Integer
//Output:         Integer
//Date:           29/04/22
//Author:         Ashwini Prakash Naiknaware
//
////////////////////////////////////////////////////////////////////////////
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
    printf("Enter Number\n");
    scanf("%d",&iValue);

    FactRev(iValue);
    return 0;
}