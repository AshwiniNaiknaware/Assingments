//////////////////////////////////////////////////////
//
//Function Name:  DisplayEvenFactor
//Discription:    Used to Print Even Factors of entered number by user 
//Input:          Integer 
//Output:         Integer 
//Date:           27/04/22
//Author:         Ashwini Prakash Naiknaware
//
//////////////////////////////////////////////////////

#include<stdio.h>

void DisplayEvenFactor(int iNo)
{
    int i = 0;

    if(iNo <= 0)      //-ve value becomes +ve 
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