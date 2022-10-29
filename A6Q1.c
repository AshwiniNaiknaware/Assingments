////////////////////////////////////////////////////////////////////////////
//
//Function Name: DisplayDigit 
//Discription:   Used to Display digits in reverse order of enetered number
//Input:         Integer
//Output:        Integer
//Date:          05/05/22
//Author:        Ashwini Prakash Naiknaware
//
/////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void DisplayDigit(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }   

    while(iNo>0)
    {
       iDigit = iNo % 10;
       printf("%d\n",iDigit);
       iNo = iNo/10;
    }
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    DisplayDigit(iValue);

    return 0;
}