///////////////////////////////////////
//Function name  : CountFour
//Input          : Integer
//Output         : Integer
//Description    : Takes input of a number and returns the frequnecy of  of 4.
//Date           : 03/11/2026
//Author         : Aryan Pradeep Jagtap
////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int CountFour(int iNO)
{
    int iFrequency = 0;
    int iDigit = 0;

    while (iNO != 0)
    {
        iDigit = iNO % 10 ;

        if (iDigit == 4)
        {
            iFrequency = iFrequency + 1;

        }
        iNO = iNO / 10;
        
    }
    return iFrequency;

}

int main()
{

    int ivalue = 0;
    int iRet = 0;

    printf("Enter the number : \n");
    scanf("%d",&ivalue);

    iRet = CountFour(ivalue);
    printf("The frequency of four is : %d \n",iRet);

    return EXIT_SUCCESS;
}