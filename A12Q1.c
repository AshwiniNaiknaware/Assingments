////////////////////////////////////////////////////////
//
//Function Name: Pattern
//Discription:   Used to print the Charachter pattern
//Inpput:        Integer
//Output:        Charachter
//Date:          12/05/22
//Author:        Ashwini Prakash Naiknaware
//
///////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iNo)
{
    int i = 0;
    char ch = '\0';

    for(i=1, ch='A'; i<=iNo; i++, ch++)
    {
        printf("%c\t",ch);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number of values\n");
    scanf("%d %d",&iValue);

    Pattern(iValue);

    return 0;
}