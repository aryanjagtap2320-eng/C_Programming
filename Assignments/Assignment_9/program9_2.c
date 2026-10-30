///////////////////////////////////////
//Function name  : DollartoInr
//Input          : Integer
//Output         : Integer
//Description    : Takes input as Dollar and converts it into Rupees
//Date           : 30/10/2026
//Author         : Aryan Pradeep Jagtap
////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

int DollartoInr(int iNO)
{
    int Rupee = 70;
    
    return (Rupee * iNO);

}


int main()
{
        int iValue = 0 ;
        int iRet = 0;
        printf("Dollar : ");
        scanf("%d",&iValue);

        iRet = DollartoInr(iValue);

        printf("Rupee :  %d\n",iRet);
        
        return EXIT_SUCCESS;
}
