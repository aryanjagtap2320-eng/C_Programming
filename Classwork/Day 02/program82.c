#include<stdio.h>
#include<stdlib.h>

int Summation(int iNO)
{
    int iCnt = 0;
    int iSum = 0;
    iSum = 1;
for (int iCnt = 1; iCnt <= iNO; iCnt++)
{
    iSum = iSum * iCnt;
}

return iSum;

}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter the frequency :\n");
    scanf("%d",&iValue);

    iRet =  Summation(iValue);
    printf("Summation is %d\n",iRet);

    return EXIT_SUCCESS;
}