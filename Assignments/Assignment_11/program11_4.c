///////////////////////////////////////
//Function name  : RangeSumEven
//Input          : Integer
//Output         : Integer
//Description    : Takes input of two numbers and prints the sum of all even numbers between them....
//Date           : 31/10/2026
//Author         : Aryan Pradeep Jagtap
////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int RangeSumEven(int iStart , int iEnd)
{
    int iCnt = 0;
    int iSum = 0;

    for (int iCnt = iStart + 1; iCnt < iEnd; iCnt++)
    {
        if ((iCnt % 2) == 0)
        {
            iSum = iSum  + iCnt;
        }
        
    }
    return iSum;



}
int main()
{

    int iValue1 = 0, iValue2 = 0;
    int iRet = 0;

    printf("Enter the Starting number :");
    scanf("%d",&iValue1);

    printf("Enter the Ending number :");
    scanf("%d",&iValue2);

    iRet = RangeSumEven(iValue1,iValue2);
    printf("The sum is : %d",iRet);


    return EXIT_SUCCESS;
}