
////////////////////////////////////////////////////////////////////////////////////////////////////
//
//Fuction Name:  Display
//Discription:   Used to print "Hello" if given number is less than 10 or Demo if number is greater   
//Input:         Integer
//Output:        charachter  
//Date:          26/04/2022
//Author:        Ashwini Prakash Naiknaware 
//
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
void Display(int iNo)
{
    if( iNo < 10)
    {
        printf("Hello\n");
    }
    else
    {
        printf("Demo\n");
    }
}
int main ()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}