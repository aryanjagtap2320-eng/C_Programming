///////////////////////////////////////
//Function name  : RectArea
//Input          : Two Float Values
//Output         : Double
//Description    : Calculates the Area of Rectangle.
//Date           : 30/10/2026
//Author         : Aryan Pradeep Jagtap
////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

double RectArea(float fWidth, float fHeight)
{
    double dArea = 0.0;

    dArea = fWidth * fHeight;

    return dArea;
}

int main()
{
    float fValue1 = 0.0, fValue2 = 0.0;
    double dRet = 0.0;

    printf("Enter the Width : ");
    scanf("%f",&fValue1);

    printf("Enter the Height : ");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1, fValue2);

    printf("Area of Rectangle is : %lf\n",dRet);

    return EXIT_SUCCESS;
}