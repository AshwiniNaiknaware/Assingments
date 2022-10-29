////////////////////////////////////////////////////
//
// Funtion Name: Pattern
// Discription:  Used to print number pattern
// Input:        Integer
// Ouput:        Integer
// Date:         14/05/22
// Author:       Ashwini Prakash Naiknaware
//
//////////////////////////////////////////////////////

#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0, iNo = 1;

    for (i = 1; i <= iRow; i++)
    {
        for (j = 1; j <= iCol; j++)
        {
            if (iNo < 10)
            {
                printf("%d\t", iNo);
                iNo++;
            }
            else
            {
                iNo = iNo - 9;
                printf("%d\t", iNo);
                iNo++;
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the number of rows and colomn\n");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}