/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//Function Name: Frequency
//Discription:   Used to calculate the difference between frequency of even number and frrequency of odd numbers
//Input:         Integer
//Output:        Integer
//Date:          06/05/22
//Author:        Ashwini Prakash Naiknaware
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength)
{
    int iCnt = 0 , iEven = 0, iOdd = 0, iDiff= 0;

    for(iCnt=0; iCnt<iLength; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iEven++;
        }
        else
        {
            iOdd++;
        }
        iDiff = iEven-iOdd;
    }
    return iDiff;

}
int main()
{
    int iSize=0, iCnt=0, iRet=0;
    int *p = NULL;

    printf("Enter number of elements\n");
    scanf("%d",&iSize);

    p=(int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d elements\n",iSize);

    for(iCnt=0; iCnt<iSize; iCnt++)
    {
        printf("Enter element %d:",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet=Frequency(p,iSize);

    printf("%d",iRet);

    free(p);

    return 0;
}