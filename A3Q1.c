///////////////////////////////////////////////////////////////////////////
//
//Function Name:  PrintEven
//Disciption:     Used to print entered number of Even numbers on the screen  
//Input:          Integer 
//Output:         Integer 
//Date:           27/04/22
//Author:         Ashwini Prakash Naiknaware
//
////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void PrintEven(int iNo)
{
   int iCnt = 0;
   if(iNo <= 0)    // if iNo is -ve code will stop  
   {
      return;
   }

   for(iCnt=1; (iCnt<=(2*iNo)); iCnt++)  //time complexity = 2N
   {
       if(iCnt % 2 == 0)
       {
          printf("%d" " ",iCnt);
       }
   }
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}