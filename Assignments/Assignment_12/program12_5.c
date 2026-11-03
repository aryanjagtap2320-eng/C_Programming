///////////////////////////////////////
//Function name  : Count
//Input          : Integer
//Output         : Integer
//Description    : Takes input of a number and counts the frequency of numbers that are less then 6.
//Date           : 03/11/2026
//Author         : Aryan Pradeep Jagtap
////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Count(int iNO)
{
    int iDigit = 0, iFrequency = 0;

    while (iNO != 0)
    {
        iDigit = iNO % 10;

        if (iDigit < 6)
        {
            iFrequency = iFrequency + 1;
        }
        iNO = iNO /  10;
    }
    return iFrequency;

}



int main()
{
    int ivalue = 0;
    int iRet = 0;

    printf("Enter the number : \n");
    scanf("%d",&ivalue);

    iRet = Count(ivalue);

    printf("The frequency of digits less then six is : %d\n",iRet);




    return EXIT_SUCCESS;
}
