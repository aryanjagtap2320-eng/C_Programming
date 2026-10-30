///////////////////////////////////////
//Function name  : MultipleDisplay
//Input          : Integer
//Output         : The first 5 multiples of a entered number
//Description    : Prints the first 5 multiples
//Date           : 30/10/2026
//Author         : Aryan Pradeep Jagtap
////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void MultipleDisplay(int iNO)
{
    int iCnt = 0;
    

    for (int iCnt = 0; iCnt < 5; iCnt++)
    {
        printf("%d\t",iNO * iCnt);
    }
    

}

int main()
{
    int iValue = 0;

    printf("Enter the number :\n");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);


    return EXIT_SUCCESS;

}