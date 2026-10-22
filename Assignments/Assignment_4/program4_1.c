///////////////////////////////////////
//Function name  : CheckNumber
//Input          : Integer
//Output         : Integer
//Description    : Performs Division
//Date           : 22/10/2026
//Author         : Aryan Pradeep Jagtap
////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void CheckNumber(int iValue)
{
    if (iValue > 0)
    {
        printf("Positive Number\n");
    }
    else if (iValue < 0)
    {
        printf("Negative Number\n");
    }
    else
    {
        printf("Zero\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    CheckNumber(iValue);

    return EXIT_SUCCESS;
}