///////////////////////////////////////
//Function name  : FactorialDifference
//Input          : Integer
//Output         : Integer
//Description    : Returns the Difference between Even and Odd Factorial of a number....
//Date           : 30/10/2026
//Author         : Aryan Pradeep Jagtap
////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

int FactorialDifference(int iNO)
{
    int iCnt = 0;
    int iEvenFact = 1;

    if (iNO < 0)
    {
        iNO = -iNO;
    }
    
    for (int iCnt = 2; iCnt <= iNO; iCnt = iCnt + 2)
    {
        iEvenFact = iEvenFact * iCnt;
    }
    
    int iOddFact = 1;
    for (int iCnt = 1; iCnt <=  iNO; iCnt = iCnt + 2)
    {
        iOddFact = iOddFact * iCnt;
    }
    int Difference = iEvenFact - iOddFact;
    return Difference;
    
}


int main()
{
        int iValue = 0 ;
        int iRet = 0;
        printf("Enter the Number : ");
        scanf("%d",&iValue);

        iRet = FactorialDifference(iValue);
        printf("The Difference is : %d\n",iRet);
    
        
        return EXIT_SUCCESS;
}
