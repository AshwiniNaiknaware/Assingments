//////////////////////////////////////////////////////////////////////
//
//Fuction Name:     Display
//Discription:      Used to Perform display 5 to 1 numbers on screen 
//Input:            integer
//Output:           integer 
//Date:             26/04/2022
//Author:           Ashwini Prakash Naiknaware 
//
///////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display()
{
    int i = 0;
   //  i = 5;
    for(i=5; i>=1; i--)
    {
        printf("%d\n",i);
        //i++;
    }
}

int main()
{
   Display();

   return 0;
}