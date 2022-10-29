////////////////////////////////////////////////////
//
// Funtion Name :Pattern
// Discription  :Used to display pattern
// Input        :Integer(iRow=5, iCol=5)
// Ouput        :-
//               *  *  *  *  *
//               *  *        *
//               *     *     *
//               *        *  *
//               *  *  *  *  *
// Date         :24/05/22
// Author       :Ashwini Prakash Naiknaware
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
            if ((i == 1) || (j == 1) || (i == iRow) || (j == iCol) || (i == j))
            {
                printf("*\t");
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