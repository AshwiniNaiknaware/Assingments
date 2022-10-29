///////////////////////////////////////////////////////////////
//
//Function Name : NonFact
//Discription:    Used to print Non Factors of entered number
//Input:          Integer
//Output:         Integer
//Date:           5/1/22
//Author:         Ashwini Prakash Naiknaware
//
///////////////////////////////////////////////////////////////
#include<stdio.h>

void NonFact(int iNo)
 {
    int iCnt = 0;

    for(iCnt=1; iCnt<iNo; iCnt++)
    {
        if(iNo % iCnt != 0)
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

    NonFact(iValue);

    return 0;
}