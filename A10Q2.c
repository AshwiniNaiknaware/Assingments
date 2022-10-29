////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//Function Name: FirstOcc
//Discription:   Used to return the index of First Occurenec of another number from entered numbers from user
//Input:         Integer
//Output:        Integer
//Date:          07/05/22
//Author:        Ashwini Prakash Naiknaware
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

int FirstOcc(int Arr[],int iLength, int iNo)
{
    int iCnt= 0;

   for(iCnt=0; iCnt<iLength; iCnt++)
   {
       if(Arr[iCnt]==iNo)
       {
           return iCnt;
       }
   } 
   return -1;
}

int main()
{
    int iSize = 0, iValue = 0, iRet = 0,  iCnt=0;
    int *p = NULL;

    printf("Enter number of elements\n");
    scanf("%d",&iSize);

    printf("Enter Another number\n");
    scanf("%d",&iValue);

    p = (int*)malloc(iSize*sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate the memory\n");
        return -1;
    }

    printf("Enter %d element:\n",iSize);

    for(iCnt=0; iCnt<iSize; iCnt++)
    {
        printf("Enter element %d:\n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet = FirstOcc(p,iSize,iValue);

    if(iRet == -1)
    {
        printf("There is no such number\n");
    }
    else
    {
        printf("First occurence of number is %d\n",iRet);
    }

    free(p);

    return 0;
}