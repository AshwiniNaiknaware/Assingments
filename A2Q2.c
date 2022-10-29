///////////////////////////////////////////////////////////////
//
//Fuction Name:  Display
//Discription:   Used to print given number of stars on screen  
//Input:         Integer
//Output:        charachter  
//Date:          26/04/2022
//Author:        Ashwini Prakash Naiknaware 
//
//////////////////////////////////////////////////////////////

#include<stdio.h>
void Display(int iNo)
{
    while(iNo > 0)
    {
        printf("*");
        iNo--;
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}