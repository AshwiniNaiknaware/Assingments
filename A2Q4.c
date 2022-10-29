//////////////////////////////////////////////////////////////////////////////////
//
//Fuction Name:  Display
//Discription:   Used to print first number in sencond number of times on screen   
//Input:         Integer Integer 
//Output:        Integer 
//Date:          26/04/2022
//Author:        Ashwini Prakash Naiknaware 
//
//////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo, int iFrequency)              
{
    int iCnt = 0;

    for(iCnt=1; iCnt<=iFrequency; iCnt++)
    {
        printf("%d\n",iNo);
    }
}
int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    printf("Enter frequency\n");
    scanf("%d",&iCount);

    Display(iValue,iCount);

    return 0;
}