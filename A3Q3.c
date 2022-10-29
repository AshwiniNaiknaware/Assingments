///////////////////////////////////////////////////////////////////////
//
//Function Nmae: DisplayEvenFcator
//Discription:   Used to print Even Factors of enetered number by user
//Input:         Integer
//Output:        Integer
//Date:          27/04/22
//Author:        Ashwini Prakash Naiknaware
//
///////////////////////////////////////////////////////////////////////

#include<stdio.h>
void DisplayEvenFactor(int iNo)
{
    int i = 0;

    if(iNo <= 0)
    {
       iNo = -iNo;
    }

    for(i=1; i<=(iNo/2); i++)
    {
        if(iNo%i==0 && i%2==0)
        {
            printf("%d" " ",i);
        }
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number\n");

    scanf("%d",&iValue);

    DisplayEvenFactor(iValue);

    return 0;
}