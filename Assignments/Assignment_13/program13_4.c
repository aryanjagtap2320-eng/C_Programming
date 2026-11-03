////////////////////////////////////////
//Function name  : MultiDigits
//Input          : Integer
//Output         : Integer
//Description    : Takes input of a number and returns the multiplication of all the digits.
//Date           : 03/11/2026
//Author         : Aryan Pradeep Jagtap
////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int MultiDigits(int iNO)
{
    int iDigits = 0, iMultiplication = 1;

    while (iNO != 0)
    {
        iDigits = iNO % 10;
        iMultiplication = iMultiplication * iDigits;
        iNO = iNO / 10;

    }
    return iMultiplication;
}

int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter the number :\n");
    scanf("%d",&iValue);

    iRet = MultiDigits(iValue);

    printf("The multiplication of the digits is : %d\n",iRet);


    return EXIT_SUCCESS;
}
