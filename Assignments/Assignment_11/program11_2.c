///////////////////////////////////////
//Function name  : RangeDisplay
//Input          : Integer
//Output         : Integer
//Description    : Takes input of two numbers and prints all the Even numbers between them....
//Date           : 31/10/2026
//Author         : Aryan Pradeep Jagtap
////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void RangeDisplayEven(int iStart, int iEnd)
{
    int iCnt = 0;

    for (int iCnt = iStart + 1;iCnt < iEnd; iCnt++)
    {
        if ((iCnt % 2) == 0 )
        {
            printf("%d\t",iCnt);
        }

    }
    
}

int main()
{

    int iValue1 = 0, iValue2 = 0;

    printf("Enter the Starting number :");
    scanf("%d",&iValue1);

    printf("Enter the Ending number :");
    scanf("%d",&iValue2);

    RangeDisplayEven(iValue1,iValue2);


    return EXIT_SUCCESS;
}