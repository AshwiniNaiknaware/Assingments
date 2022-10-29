//////////////////////////////////////////////////////////////////////////
//
//Fuction Name:  ChkEven
//Discription:   Used to check if number entered by user is even or odd  
//Input:         Integer
//Output:        Boolean  
//Date:          26/04/2022
//Author:        Ashwini Prakash Naiknaware 
//
//////////////////////////////////////////////////////////////////////////

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkEven(int iNo)
{
    if(iNo %2 == 0)
    {
        printf("Number is Even\n");
    }
    else
    {
        printf("Number is odd\n");
    }

    return TRUE;
}
int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number\n");
    scanf("%d\n",&iValue);

    bRet = ChkEven(iValue);

    //Display result

    return 0;
}