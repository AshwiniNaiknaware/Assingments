////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//Function Name: Range
//Discription:   Used to Display all the elements from given set of elements
//Input:         Integer
//Output:        Integer
//Date:          07/05/22
//Author:        Ashwini Prakash Naiknaware
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[], int iLength, int iNo1, int iNo2)
{
    int iCnt = 0;

    for(iCnt=0; iCnt<iLength; iCnt++)
    {
        if((Arr[iCnt]>iNo1) && (Arr[iCnt]<iNo2))
        {
            printf("%d" " ",Arr[iCnt]);
        }
    }
}

int main()
{
    int iSize= 0, iCnt =0, iValue1 = 0, iValue2 = 0;
    int *p = NULL;

    printf("Enter number of elements\n");
    scanf("%d",&iSize);

    printf("Enter the Starting point\n");
    scanf("%d",&iValue1);
   
    printf("Enter the Ending point\n");
    scanf("%d",&iValue2);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate the memory\n");
        return -1;
    }
    
    printf("Enter %d elements\n",iSize);

    for(iCnt=0; iCnt<iSize; iCnt++)
    {
        printf("Enter elements %d: " " ",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    Range(p,iSize,iValue1,iValue2);

    free(p);
    
    return 0;
}