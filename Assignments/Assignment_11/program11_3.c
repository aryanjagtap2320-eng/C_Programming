///////////////////////////////////////
//Function name  : RangeSum
//Input          : Integer
//Output         : Integer
//Description    : Takes input of two numbers and prints the sum of numbers between them....
//Date           : 31/10/2026
//Author         : Aryan Pradeep Jagtap
////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int RangeSum(int iStart, int iEnd)
{
    int iCnt = 0;
    int iSum = 0;
    
    if (iStart < 0)
        {
            printf("Invalid State\n");
        }

    for (int iCnt = iStart + 1;iCnt < iEnd; iCnt++)
    {
    
        iSum = iSum + iCnt;
    }
    return iSum;
    
}

int main()
{

    int iValue1 = 0, iValue2 = 0;
    int iRet = 0;

    printf("Enter the Starting number :");
    scanf("%d",&iValue1);

    printf("Enter the Ending number :");
    scanf("%d",&iValue2);

    iRet = RangeSum(iValue1,iValue2);
    printf("The sum is : %d",iRet);


    return EXIT_SUCCESS;
}