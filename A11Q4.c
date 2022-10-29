////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//Function Name: Digits
//Discription:   Used to Display such number which contain 3 digits in it from numbers entered by user
//Input:         Integer
//Output:        Integer
//Date:          09/05/22
//Author:        Ashwini Prakash Naiknaware
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[], int iLength)
{
    int iCnt = 0;

   for(iCnt=0; iCnt<iLength; iCnt++)
   {
       int iDigit = 0, iDigCnt = 0;
       int iTemp = 0;

       iTemp = Arr[iCnt];

       while(Arr[iCnt] != 0)
       {
           iDigit = Arr[iCnt]%10;
          
           iDigCnt++;
          
           Arr[iCnt]=Arr[iCnt]/10;
       }

       Arr[iCnt] = iTemp;

       if(iDigCnt == 3)
       {
           printf("%d" " ",Arr[iCnt]);
       }
   }   
}

int main()
{
    int iSize = 0, iCnt = 0;
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

    Digits(p,iSize);

    free(p);

    return 0;
}