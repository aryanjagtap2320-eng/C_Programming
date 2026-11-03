/////////////////////////////////////////
//Function name  : CountRange
//Input          : Integer
//Output         : Integer
//Description    : Takes input of a number and counts the frequency of numbers greayter then 3 and less then 7.
//Date           : 03/11/2026
//Author         : Aryan Pradeep Jagtap
////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int CountRange(int iNO)
{
    int iDigit = 0, iFrequency = 0;

    while (iNO != 0)
    {
        iDigit = iNO % 10;
        if ((iDigit > 3) && (iDigit < 7))
        {
            iFrequency = iFrequency + 1;
        }
        iNO = iNO / 10;
    }
    return iFrequency ;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    iRet = CountRange(iValue);
    printf("The count of digits less then 7 and greater then 3 is : %d\n",iRet);

    return EXIT_SUCCESS;
}