//////////////////////////////////////////////////////////////////
//
//Fuction Name:  Display
//Discription:   Used to print given number of stars on screen  
//Input:         Integer
//Output:        charachter  
//Date:          26/04/2022
//Author:        Ashwini Prakash Naiknaware 
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{   
    int iCnt = 0;

    for(iCnt=1; iCnt<=iNo; iCnt++)
    {
        printf("*");
    }

}
int main()
{
    int iValue = 0 ;

    printf("Enter number\n");
    scanf("%d\n",&iValue);

    Display(iValue);

    return 0;
}
