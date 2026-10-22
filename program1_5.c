//////////////////////////////////////
//Function name  : Accept
//Input          : Integer
//Output         : True or False
//Description    : Prints the * as per given input
//Date           : 22/10/2026
//Author         : Aryan Pradeep Jagtap
////////////////////////////////////////
#include <stdio.h>

void Accept(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*");
    }
}

int main()
{
    int iValue = 0;

    iValue = 5;

    Accept(iValue);

    return 0;
}
