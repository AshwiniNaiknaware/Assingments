/////////////////////////////////////////////////////////////////////////
//
//Function Name: Pattern
//Discription:   Used to print the Linear number and star pattern 
//Input:         Integer
//Output:        Integer
//Date:          12/05/22
//Author:        Ashwini Prakash Naiknaware
//
/////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iNo)
{
   int i = 0;

   for(i=1; i<=iNo; i++)
   {
       printf("%d\t*\t",i);
   }
}

int main()
{
    int iValue= 0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}