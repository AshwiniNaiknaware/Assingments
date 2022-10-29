////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//Function Name: Product
//Discription:   Used to return the product of odd numbers from entered number from user
//Input:         Integer
//Output:        Integer
//Date:          07/05/22
//Author:        Ashwini Prakash Naiknaware
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[],int iLength)
{
    int iCnt= 0, iProd = 1 ;

   for(iCnt=0; iCnt<iLength; iCnt++)
   {
      if((Arr[iCnt]%2) != 0)
      {
          iProd = iProd * Arr[iCnt];
      }
   } 
   return iProd;
}

int main()
{
    int iSize = 0, iRet = 0,  iCnt=0;
    int *p = NULL;

    printf("Enter number of elements\n");
    scanf("%d",&iSize);

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

    iRet=Product(p , iSize);

    printf("Product is %d",iRet);

    free(p);

    return 0;
}