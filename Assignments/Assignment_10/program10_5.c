///////////////////////////////////////
//Function name  : SquareMeter
//Input          : Integer
//Output         : Double
//Description    : Converts Square Feet into Square Metres.
//Date           : 30/10/2026
//Author         : Aryan Pradeep Jagtap
////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

double SquareMeter(int iValue)
{
    double dArea = 0.0;

    dArea = iValue * 0.0929;

    return dArea;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter Area in Square Feet : ");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("Area in Square Metres is : %lf\n",dRet);

    return EXIT_SUCCESS;
}