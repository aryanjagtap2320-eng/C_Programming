///////////////////////////////////////
//Function name  : Table
//Input          : Integer
//Output         : Integer
//Description    : Takes the number and returns its Table...
//Date           : 30/10/2026
//Author         : Aryan Pradeep Jagtap
////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

void Table(int iNO)
{
        int iCnt = 0;
        
        if (iNO < 0)
        {
                iNO = -iNO;

        }

        for (int iCnt = 1; iCnt <= 10; iCnt++)
        {
                printf("%d\t",iCnt*iNO);
        }
        
        
        


}


int main()
{
        int iValue = 0 ;

        printf("Enter the number : ");
        scanf("%d",&iValue);

        Table(iValue);

        
        return EXIT_SUCCESS;
}
