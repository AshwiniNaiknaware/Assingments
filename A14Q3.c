/////////////////////////////////////////////////
//
//Function Name: Pattern
//Discription:   Used for printting pattern
//Input:         Integer
//Output:        -
//Date:          12/05/22
//Author:        Ashwini Prakash Naiknaware
//
/////////////////////////////////////////////////
#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i=0, j=0;
    char ch='\0';

    for(i=1,ch='A'; i<=iRow; i++,ch++)
    {
        for(j=1; j<=iCol; j++)
        {
            printf("%c\t",ch);
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 =0, iValue2 = 0;

    printf("Enter number of Rows and colomn\n");
    scanf("%d %d",&iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}