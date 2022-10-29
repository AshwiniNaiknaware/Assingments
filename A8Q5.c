////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//Function Name: Display
//Discription:   Used to Display such numbers which are multiplies of 11 from entered numbers 
//Input:         Integer
//Output:        Integer
//Date:          06/05/22
//Author:        Ashwini Prakash Naiknaware
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iLength)
{
    int iCnt = 0;

    for(iCnt=0; iCnt<iLength; iCnt++)
    {
        if(Arr[iCnt] % 11 == 0)
        {
            printf("%d" " ",Arr[iCnt]);
        }  
    }
}
int main()
{
   int iSize = 0,iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements\n");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements\n",iSize);

    for(iCnt=0; iCnt<iSize; iCnt++)
    {
        printf("Enter element %d" " ",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    Display(p, iSize);
    free(p);

    return 0;
}