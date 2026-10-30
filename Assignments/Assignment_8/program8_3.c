///////////////////////////////////////
//Function name  : Factorial
//Input          : Integer
//Output         : Integer
//Description    : Takes the number and returns its factorial...
//Date           : 30/10/2026
//Author         : Aryan Pradeep Jagtap
////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

int Factorial(int iNO)
{
        int iCnt = 0;
        int iFact = 1;

        if (iNO < 0 )
        {
                iNO =  -iNO;
        }
        
        for (int iCnt = 1; iCnt <= iNO; iCnt++)
        {
                iFact = iFact * iCnt;
        }
        return iFact;
        


}


int main()
{
        int iValue = 0 , iRet = 0;

        printf("Enter the number : ");
        scanf("%d",&iValue);

        iRet = Factorial(iValue);

        printf("The Factorial of the given Number is : %d\n",iRet);

        return EXIT_SUCCESS;
}
