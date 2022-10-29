///////////////////////////////////////////////////////////////////////////////////////////
//
//Function Name: Frequnecy
//Discription:   Used to return the freqeuncy of one number from entered numbers 
//Input:         Integer
//Output:        Integer
//Date:          06/05/22
//Author:        Ashwini Prakash Naiknaware
//
//////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength, int iNo)
{
    int iCnt = 0 , iDigCnt = 0;

    for(iCnt=0; iCnt<iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iDigCnt++;
        }
    }
    return iDigCnt;
}
int main()
{
    int iSize = 0, iCnt = 0, iRet = 0, iValue = 0;
    int *p = NULL;

    printf("Enter number of elements\n");
    scanf("%d",&iSize);

    printf("Enter another number\n");
    scanf("%d",&iValue);
    
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

    iRet=Frequency(p,iSize,iValue);

    printf("%d",iRet);

    free(p);

    return 0;
}