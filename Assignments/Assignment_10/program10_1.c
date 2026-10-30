///////////////////////////////////////
//Function name  : CircleArea
//Input          : Float
//Output         : Double
//Description    : Calculates the Area of Circle.
//Date           : 30/10/2026
//Author         : Aryan Pradeep Jagtap
////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

double CircleArea(float fRadius)
{
    double dArea = 0.0;

    dArea = 3.14 * fRadius * fRadius;

    return dArea;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter the Radius : ");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of Circle is : %lf\n",dRet);

    return EXIT_SUCCESS;
}