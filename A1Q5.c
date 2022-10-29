////////////////////////////////////////////////////////////////
//
//Fuction Name:  Accept 
//Discription:   Used to print given number of stars on screen  
//Input:         Integer
//Output:        charachter  
//Date:          26/04/2022
//Author:        Ashwini Prakash Naiknaware 
//
////////////////////////////////////////////////////////////////
 
#include<stdio.h>

void Accept(int iNo)
{
   int iCnt = 0;

   for(iCnt=1; iCnt<=5; iCnt++)
   {
       printf("*");
   }
}

int main()
{
    int iValue = 0;
    int iVlaue = 5;

    Accept(iValue);
    return 0;
}