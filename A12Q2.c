///////////////////////////////////////////////
//
//Function Name: Pattern
//Discription:   Used to print linear pattern
//Input:         Integer
//Output:        Integer
//Date:          12/05/22
//Author:        Ashwini Prakash Naiknaware
//
/////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iNo)
{
   int i = 0;

   for(i=iNo; i>=1; i--)
   {
       printf("%d\t#\t",i);
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