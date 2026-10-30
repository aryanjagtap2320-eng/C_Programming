///////////////////////////////////////
//Function name  : OddFactorial
//Input          : Integer
//Output         : Integer
//Description    : Returns the Odd Factorial of a number....
//Date           : 30/10/2026
//Author         : Aryan Pradeep Jagtap
////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

int OddFactorial(int iNO)
{
    int iCnt = 0;
    int iFact = 1;

    if (iNO < 0)
    {
        iNO = -iNO;
    }

    for (int iCnt = 1; iCnt <= iNO; iCnt = iCnt + 2)
    {
        iFact = iFact  * iCnt;
    }
    return iFact;
    

}


int main()
{
        int iValue = 0 ;
        int iRet = 0;
        printf("Enter the Number : ");
        scanf("%d",&iValue);

        iRet = OddFactorial(iValue);

        printf("Odd Factorial is:  %d\n",iRet);
        
        return EXIT_SUCCESS;
}
