////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//Function Name: Minimum
//Discription:   Used to return the minimum number from entered number by user 
//Input:         Integer
//Output:        Integer
//Date:          07/05/22
//Author:        Ashwini Prakash Naiknaware
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL; 

int Minimum(int Arr[], int iLength)
{
    int iCnt = 0;

    int iSmall = Arr[0];

    for(iCnt=0; iCnt<iLength; iCnt++)
    {
        if(Arr[iCnt] < iSmall)
        {
           iSmall = Arr[iCnt];
        }
    }
    return iSmall;

}
int main()
{
    int iSize = 0, iCnt = 0, iRet = 0;
    int *p = NULL;

    printf("Enter number of elements\n");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize* sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate the memory\n");
        return -1;
    }

    printf("Enter %d elements\n",iSize);

    for(iCnt=0; iCnt<iSize; iCnt++)
    {
        printf("Enter element %d :" " ",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet = Minimum(p,iSize);

    printf("Smallest Number is %d\n",iRet);

    free(p);

    return 0;
}