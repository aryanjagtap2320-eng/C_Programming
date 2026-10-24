//Take a number from user and find its factorial...

#include<stdio.h>
#include<stdlib.h>

int FACTORIAL(int iNO)
{
    int iCnt = 0;
    int iFact = 0;
    
    
    for (iCnt = 1, iFact = 1; iCnt <= iNO; iCnt++)
    {
        iFact = iFact * iCnt;
    }
    return iFact;
}

int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter the number :\n");
    scanf("%d",&iValue);

    iRet = FACTORIAL(iValue);
    printf("Factorial is  %d\n",iRet);

    
    return EXIT_SUCCESS;
}