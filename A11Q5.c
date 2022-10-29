////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//Function Name: DigitsSum
//Discription:   Used to Display the summation of digits of each number
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
        int iDigSum = 0,  iDigit =0;

       while(Arr[iCnt] != 0)
       {
           iDigit = Arr[iCnt]%10;

           iDigSum = iDigSum+iDigit;

           Arr[iCnt]= Arr[iCnt]/10;
       }
        printf("%d" " ",iDigSum);
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