//Take a number from user and find its factorial...

#include<stdio.h>
#include<stdlib.h>

unsigned long long FACTORIAL(int iNO)
{
    int iCnt = 0;
    long long iFact = 0;
    
    for (iCnt = 1, iFact = 1; iCnt <= iNO; iCnt++)
    {
        iFact = iFact * iCnt;
    }
    return iFact;
}

int main()
{
    int iValue = 0;
    long long  iRet = 0;

    printf("Enter the number :\n");
    scanf("%d",&iValue);

    iRet = FACTORIAL(iValue);
    printf("Factorial is %lld\n",iRet);

    
    return EXIT_SUCCESS;
}