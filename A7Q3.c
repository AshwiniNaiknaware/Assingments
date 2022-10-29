
////////////////////////////////////////////////////////////////////////////////
//
//Function Name: CountRange
//Discription:   Used to count the digits which lies between the range 0f 3 and 7 
//Input:         Integer
//Output:        Integer
//Date:          05/05/22
//Author:        Ashwini Prakash Naiknaware
//
////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

int CountRange(int iNo)
{
    int iDigit = 0, iDigCnt = 0;

    if(iNo < 0)
    { 
        iNo =-iNo ;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10 ;
        if( 
           (iDigit>3) && 
           (iDigit<7)
          )
        {
           iDigCnt++;
        }
        iNo = iNo/10;
    }
    return iDigCnt;
}

int main()
{ 
    int iValue =0, iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);
    
    iRet=CountRange(iValue);
    printf("%d",iRet);

    return 0;
}