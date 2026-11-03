/////////////////////////////////////////
//Function name  : CountEven
//Input          : Integer
//Output         : Integer
//Description    : Takes input of a number and counts the frequency of even digits.
//Date           : 03/11/2026
//Author         : Aryan Pradeep Jagtap
////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int CountEven(int iNO)
{
    int iDigit = 0, iFrequency = 0;

    while (iNO != 0)
    {
        iDigit = iNO % 10;
        if ((iDigit % 2) == 0 )
        {
            iFrequency = iFrequency + 1;
        }
        iNO = iNO / 10;
    }
    return iFrequency;

}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    iRet = CountEven(iValue);

    printf("The frequency of even digits is : %d\n",iRet);



    return EXIT_SUCCESS;
}