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
    char ch ='\0';

    for(i=1; i<=iRow; i++)
    {
        for(j=1,ch='A'; j<=iCol; j++,ch++)
        {
            printf("%c\t",ch);
        }
        printf("\n");  
    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and colomn\n");
    scanf("%d %d",&iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}