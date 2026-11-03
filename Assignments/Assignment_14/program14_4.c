////////////////////////////////////////
//Function name  : SumNonFact
//Input          : Integer
//Output         : Integer
//Description    : Takes input of a number and returns the sum of all the Non-factors of that number.
//Date           : 03/11/2026
//Author         : Aryan Pradeep Jagtap
////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int SumNonFactors(int iNO)
{
    int iCnt = 0, iSum = 0;

    for (int iCnt = 1; iCnt <= iNO; iCnt++)
    {
        if ((iNO % iCnt) != 0)
        {
            iSum = iSum + iCnt;
        }
        
    }
    return iSum;
    
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number :\n");
    scanf("%d",&iValue);

    iRet = SumNonFactors(iValue);

    printf("The Sum of all the non factors is : %d\n",iRet);


    return EXIT_SUCCESS;
}