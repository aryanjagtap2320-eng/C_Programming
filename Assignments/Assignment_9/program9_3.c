///////////////////////////////////////
//Function name  : EvenFactorial
//Input          : Integer
//Output         : Integer
//Description    : Returns the Even Factorial of a number....
//Date           : 30/10/2026
//Author         : Aryan Pradeep Jagtap
////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

int EvenFactorial(int iNO)
{
    int iCnt = 0;
    int iFact = 1;

    if (iNO < 0)
    {
        iNO = -iNO;
    }

    for (int iCnt = 2; iCnt <= iNO; iCnt = iCnt + 2)
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

        iRet = EvenFactorial(iValue);

        printf("Factorial of Even is:  %d\n",iRet);
        
        return EXIT_SUCCESS;
}
