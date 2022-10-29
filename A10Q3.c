////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//Function Name: LastOcc
//Discription:   Used to return the index of Last Occurence of Another number from entered numbers from user
//Input:         Integer
//Output:        Integer
//Date:          07/05/22
//Author:        Ashwini Prakash Naiknaware
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

int LastOcc(int Arr[], int iLength, int iNo)
{
    int iCnt= 0, iCntLast = 0;

   for(iCnt=0; iCnt<iLength; iCnt++)
   {
       if(Arr[iCnt] == iNo)
       {
            iCntLast = iCnt;
       }
   } 

   if(iCntLast > 0)
   {
       return iCntLast;
   }
   else 
   {
       return -1;
   }

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
        printf("Enter element %d:" " ",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet = LastOcc(p,iSize,iValue);

    if(iRet == -1)
    {
        printf("There is no such number\n");
    }
    else
    {
        printf("Last occurence of number is :%d\n",iRet);
    }

    free(p);

    return 0;
}