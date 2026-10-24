//Take a number from user and print its factors ...

#include<stdio.h>
#include<stdlib.h>

int SUMMATION(int iNO)
{
    int iCnt = 0;
    int iSum = 0;

    for (int iCnt = 1; iCnt <= iNO; iCnt++)
    {
        iSum = iSum + iCnt;
    }
    return iSum;
}

int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter the number :\n");
    scanf("%d",&iValue);

    iRet = SUMMATION(iValue);
    printf("%d\n",iRet);

    
    return EXIT_SUCCESS;
}