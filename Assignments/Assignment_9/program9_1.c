///////////////////////////////////////
//Function name  : Display
//Input          : Integer
//Output         : Special Symbol
//Description    : *    *   *   *   *   *   #   #   #   #   #
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

    for (int iCnt = 1; iCnt <= iNO; iCnt++)
    {
        printf("*\t");
    }
    for (int iCnt = 1; iCnt <= iNO; iCnt++)
    {
        printf("#\t");
    }
    
    


}


int main()
{
        int iValue = 0 ;

        printf("Enter the number : ");
        scanf("%d",&iValue);

        Display(iValue);

        
        return EXIT_SUCCESS;
}
