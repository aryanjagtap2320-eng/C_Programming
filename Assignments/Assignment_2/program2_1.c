///////////////////////////////////////
//Function name  : DISPLAY
//Input          : Integer
//Output         : Integer
//Description    : Performs printing
//Date           : 18/10/2026
//Author         : Aryan Pradeep Jagtap
////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

void DISPLAY(int iNO)
{
    int iCnt = 0;
    
    if (iNO < 0)
    {
        iNO = -iNO;
    }
    
    for ( iCnt = 1; iCnt <= iNO; iCnt++)
    {
        printf("*\t");
    }
    

}


int main()
{
    int iValue = 0;

    printf("Enter the number :\n");
    scanf("%d",&iValue);

    DISPLAY(iValue);

    return EXIT_SUCCESS;
}