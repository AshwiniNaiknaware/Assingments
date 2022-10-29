///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//Function Name: Difference
//Discription:   Used to calculate diffenrence between sum of even numbers and sum of odd numbers in the array 
//Input:         Integer
//Output:        Integer
//Date:          06/05/22
//Author:        Ashwini Prakash Naiknaware
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iLength)
{
    int iCnt = 0, iSumEven = 0, iSumOdd = 0, iDiff = 0;

    for(iCnt=0; iCnt<iLength; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iSumEven = iSumEven + Arr[iCnt];
        }
        else
        {
            iSumOdd = iSumOdd + Arr[iCnt];
        }
        iDiff = iSumEven - iSumOdd ;
    }
    return iDiff;
}
int main()
{ 
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements\n");
    scanf("%d",&iSize);

    p = (int*)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unabale to allocate memoery\n");
        return -1;
    }

    printf("Enter %d elements\n",iSize);

    
    for(iCnt =0; iCnt < iSize; iCnt++)
    {
        printf("Enter element :%d" " ",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet = Difference(p,iSize);

    printf("Result is %d",iRet);

    free(p);

    return 0;
}