///////////////////////////////////////
//Function name  : Pattern
//Input          : Integer
//Output         : $
//Description    : Prints $ as per the input using the for loop.
//Date           : 30/10/2026
//Author         : Aryan Pradeep Jagtap
////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNO)
{
    int iCnt = 0;

    for (int iCnt = 1; iCnt <= iNO; iCnt++)
    {
        printf("$\t");
    }
    

    if (iNO < 0)
    {
        iNO = -iNO;
    }

}

int main()
{
    int iValue = 0;

    printf("Enter the number of $ :");
    scanf("%d",&iValue);

    Pattern(iValue);

    return EXIT_SUCCESS;
}