////////////////////////////////////////
//Function name  : CountDiff
//Input          : Integer
//Output         : Integer
//Description    : Takes input of a number and returns the Difference between the summation of the even and odd digits.
//Date           : 03/11/2026
//Author         : Aryan Pradeep Jagtap
////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int CountDiff(int iNO)
{
    int iDigits = 0, iEvenSum = 0, iOddSum = 0, iDiff = 0;

    while (iNO != 0)
    {
        iDigits = iNO % 10;
        if ((iDigits % 2) == 0)
        {
            iEvenSum = iEvenSum + iDigits;
        }
        else
        {
            iOddSum = iOddSum + iDigits;
        }

        iNO = iNO / 10;
    }

    iDiff = (iEvenSum - iOddSum);
    return  iDiff;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);
    printf("The difference between the summation of even and odd digits is : %d\n",iRet);

    return EXIT_SUCCESS;
}