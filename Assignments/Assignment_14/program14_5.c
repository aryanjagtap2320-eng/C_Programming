////////////////////////////////////////
//Function name  : SumDiff
//Input          : Integer
//Output         : Integer
//Description    : Takes input of a number and returns the difference of sum of  all the factors and Non-factors of that number.
//Date           : 03/11/2026
//Author         : Aryan Pradeep Jagtap
////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int SumDiff(int iNO)
{
    int iCnt = 0, iSumFact = 0, iSumNonFact = 0;

    for (int iCnt = 1; iCnt <= iNO; iCnt++)
    {
        if ((iNO % iCnt) != 0)
        {
            iSumNonFact = iSumNonFact + iCnt;
        }
        else
        {
            iSumFact = iSumFact + iCnt;
        }
    }
    int iDiff = iSumFact - iSumNonFact;
    return iDiff;
    
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number :\n");
    scanf("%d",&iValue);

    iRet = SumDiff(iValue);

    printf("The Sum of all the non factors is : %d\n",iRet);


    return EXIT_SUCCESS;
}