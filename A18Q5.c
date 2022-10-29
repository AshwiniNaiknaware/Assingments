////////////////////////////////////////////////////
//
// Funtion Name  :Pattern
// Discription   :Used to display pattern
// Input:        :Integer(iRow = 5, iCol = 5)
// Ouput         : -
//					1	2	3	4	5
//					1	2			5
//					1		3		5
//					1			4	5
//					1	2	3	4	5
// Date          :24/05/22
// Author        :Ashwini Prakash Naiknaware
//
//////////////////////////////////////////////////////

#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for (i = 1; i <= iRow; i++)
    {
        for (j = 1; j <= iCol; j++)
        {
            if ((i == j) || (i == 1) || (j == 1) || (i == iRow) || (j == iCol))
            {
                printf("%d\t", j);
            }
            else
            {
                printf("\t");
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the number of rows and columns\n");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}