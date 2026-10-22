///////////////////////////////////////
//Function name  : CheckEvenOdd
//Input          : Integer
//Output         : Integer
//Description    : Checks whether the number is even or odd
//Date           : 22/10/2026
//Author         : Aryan Pradeep Jagtap
////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>

void CheckEvenOdd(int iValue)
{
    if (iValue % 2 == 0)
    {
        printf("Even Number\n");
    }
    else
    {
        printf("Odd Number\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    CheckEvenOdd(iValue);

    return EXIT_SUCCESS;
}
