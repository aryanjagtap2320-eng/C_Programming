//Take a number from user and print its factors and the sum of these factors...

#include<stdio.h>
#include<stdlib.h>

int SumFactors(int iNO)
{
    int iCnt = 0,iSum = 0;

    for ( iCnt = 1; iCnt <= iNO/2 ; iCnt++)
    {
        if ((iNO % iCnt) == 0)
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

    iRet = SumFactors(iValue);
    printf("Summation of factors : %d\n",iRet);

    return EXIT_SUCCESS;
}
//Time complexity is : O(N/2)