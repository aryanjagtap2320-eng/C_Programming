///////////////////////////////////////
//Function name  : CountTwo
//Input          : Integer
//Output         : Integer
//Description    : Takes input of a number and returns the number of repetitions of 2.
//Date           : 03/11/2026
//Author         : Aryan Pradeep Jagtap
////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int CountTwo(int iNO)
{

    int iFrequency = 0;
    int iDigit = 0;

    while (iNO != 0)
    {
        iDigit = iNO % 10;
        if (iDigit == 2)
        {
            iFrequency = iFrequency + 1;
        }

        iNO = iNO / 10;
        
    }
    return iFrequency;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    iRet = CountTwo(iValue);

    printf("The frequency of two is : %d\n",iRet);

    return EXIT_SUCCESS;
}