///////////////////////////////////////
//Function name  : Display
//Input          : Integer
//Output         : 1 2 3 4 5.....
//Description    : Prints numbers till the input number provided
//Date           : 30/10/2026
//Author         : Aryan Pradeep Jagtap
////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Display(int iNO)
{
    int iCnt = 0;

    if (iNO < 0)
    {
        iNO = -iNO;
    }
    
    for (int iCnt = 1; iCnt < iNO; iCnt++)
    {
        printf("%d\t",iCnt);
    }
}


int main()
{
    int iValue = 0;
    printf("Enter the number :\n");
    scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}
