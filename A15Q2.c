/////////////////////////// /////////////////////////
//
// Funtion Name: Pattern
// Discription:  Used to print number pattern
// Input:        Integer
// Ouput:        Integer
// Date:         22/05/22
// Author:       Ashwini Prakash Naiknaware
//
//////////////////////////////////////////////////////

#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0, iNo = 0;

    for (i = 1; i <= iRow; i++)
    {
        for (j = 1, iNo = 1; j <= (iCol + 1); j++, iNo++)
        {
            if (i % 2 == 1) // iRow is odd
            {
                printf("%d\t", iNo * 2);
            }
            else if (i % 2 == 0) // iRow is even
            {
                if (iNo % 2 == 1) // if iNo is odd
                {
                    printf("%d\t", iNo);
                    iNo++;
                }
            }
        }
        printf("\n");
    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of Rows and colomns\n");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}