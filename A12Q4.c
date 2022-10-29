///////////////////////////////////////////////////////////////////////////////
//
//Function Name: Pattern
//Discription:   Used to print the linear pattern of # * and number on screen
//Input:         Integer 
//Output:        Integer 
//Date:          12/05/22
//Author:        Ashwini Prakash Naiknaware
//
//////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iNo)
{
    int i = 0;

    for(i=1; i<=iNo; i++)
    {
        printf("#\t %d\t *\t",i);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number of elements\n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}