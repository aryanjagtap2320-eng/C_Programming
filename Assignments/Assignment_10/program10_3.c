///////////////////////////////////////
//Function name  : KMtoMeter
//Input          : Integer
//Output         : Integer
//Description    : Converts Kilometres into Metres.
//Date           : 30/10/2026
//Author         : Aryan Pradeep Jagtap
////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int KMtoMeter(int iNO)
{
    int iMeter = 0;

    iMeter = iNO * 1000;

    return iMeter;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Distance in Kilometres : ");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("Distance in Metres is : %d\n",iRet);

    return EXIT_SUCCESS;
}